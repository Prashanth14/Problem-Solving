// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 

 #include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string str, orig;
       
        for(int i = 0 ; i<s.length(); i++){
            if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)){
                if(s[i] >= 65 && s[i] <= 90){
                    s[i] +=32;
                }
                str += s[i];
            }
        }
        
        orig=str;
        
        reverse(str.begin(), str.end());
      
        if(orig == str )
            return true;
        else
            return false;
    }
};