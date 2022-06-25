// Given a string date representing a Gregorian calendar date formatted as YYYY-MM-DD, return the day number of the year.

// Example 1:

// Input: date = "2019-01-09"
// Output: 9
// Explanation: Given date is the 9th day of the year in 2019.
// Example 2:

// Input: date = "2019-02-10"
// Output: 41
 

// Constraints:

// date.length == 10
// date[4] == date[7] == '-', and all other date[i]'s are digits
// date represents a calendar date between Jan 1st, 1900 and Dec 31th, 2019.

class Solution {
public:
    bool isLeapyear(int year){
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    }
    
    int daysInMonth(int mon, int year){
        if(mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
            return 31;
        if(mon == 2)
            return isLeapyear(year) ? 29: 28;
        return 30;
    }
    
    int dayOfYear(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int days = stoi(date.substr(8,2));
        
        int total_days = 0;
        for(int i = 1; i< month; ++i){
            total_days += daysInMonth(i, year);
        }
        
        return total_days + days;
    }
};