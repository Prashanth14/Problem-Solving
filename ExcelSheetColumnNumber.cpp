// Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
 
// Example 1:

// Input: columnTitle = "A"
// Output: 1
// Example 2:

// Input: columnTitle = "AB"
// Output: 28
// Example 3:

// Input: columnTitle = "ZY"
// Output: 701

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int c, n = columnTitle.size();
        if(n == 1 ){
            c = columnTitle[0] - 64;
            return c; 
        }
            
        int res = 0;
        for(int i = 0; i < n; i++){
            c = columnTitle[i] - 64;
            res = res * 26 + c;
        }
            
       return res; 
    }
};
 