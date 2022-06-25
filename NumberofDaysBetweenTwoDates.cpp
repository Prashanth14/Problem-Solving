// Write a program to count the number of days between two dates.

// The two dates are given as strings, their format is YYYY-MM-DD as shown in the examples.

// Example 1:

// Input: date1 = "2019-06-29", date2 = "2019-06-30"
// Output: 1
// Example 2:

// Input: date1 = "2020-01-15", date2 = "2019-12-31"
// Output: 15
 

// Constraints:

// The given dates are valid dates between the years 1971 and 2100.

class Solution {
public:
    //checking whether the year is leap year or not
    bool isLeapyear(int year){
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    }
    //Calculating the number of days in the month
    int daysInMonth(int mon, int year){
        if(mon == 1 || mon == 3 || mon == 5 || mon == 7 ||mon == 8 || mon == 10 || mon == 12)
            return 31;
        
        if(mon == 2)
            return isLeapyear(year) ? 29 : 28;
        
        return 30;  
    }
    //Calculate the total number of days
    int stringtoInt(string date){
        int year = stoi(date.substr(0,4));
        int mon = stoi(date.substr(5,2));
        int days = stoi(date.substr(8,2));
        
        int total_days = 0;
        //number of days in years
        for(int i = 1971; i < year; ++i){
            total_days += isLeapyear(i) ? 366 : 365;
        }
        //number of days in months
        for(int i = 1; i < mon; ++i){
            total_days +=  daysInMonth(i, year);
        }
        // total days including in years, months, and days
        return total_days + days;
    }
    
    int daysBetweenDates(string date1, string date2) {
        return (abs(stringtoInt(date1) - stringtoInt(date2)));
    }
};