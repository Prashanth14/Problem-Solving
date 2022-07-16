// ' Given a date, return the corresponding day of the week for that date.

// ' The input is given as three integers representing the day, month and year respectively.

// ' Return the answer as one of the following values {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}.


// ' Example 1:

// ' Input: day = 31, month = 8, year = 2019
// ' Output: "Saturday"
// ' Example 2:

// ' Input: day = 18, month = 7, year = 1999
// ' Output: "Sunday"
// ' Example 3:

// ' Input: day = 15, month = 8, year = 1993
// ' Output: "Sunday"
 

// ' Constraints:

// ' The given dates are valid dates between the years 1971 and 2100.


class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        //Jan 01, 1971 is Friday
        vector<string> daysOfWeek = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        
        vector<int> months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int nrDays = 0;
        
        //calculate years
        for(int i=1971; i<year; i++)
            nrDays += 365 + (i%4 == 0);
        
        //calculate months
        for(int i=1; i<month; i++)
            nrDays += months[i];
        
        if(year < 2100 && year%4 == 0 && month > 2)
            nrDays++;
        
        //calculate days
            nrDays += day-1;
        
        return daysOfWeek[nrDays%7];
    }
};