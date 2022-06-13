// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"
 

// Constraints:

// 1 <= s.length <= 100
// s consists of characters with ASCII values in the range [33, 122].
// s does not contain '\"' or '\\'.


class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0, j = s.size() - 1;
        
        while(i < j){
            if( (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) && (s[j] >= 65 && s[j] <= 90 || s[j] >= 97 && s[j] <= 122) ){
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
                i++;
                j--;
            }else if( (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) && !(s[j] >= 65 && s[j] <= 90 || s[j] >= 97 && s[j] <= 122) ){
                j--;
            }else if( !(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) && (s[j] >= 65 && s[j] <= 90 || s[j] >= 97 && s[j] <= 122) ){
                i++;
            }else if( !(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) && !(s[j] >= 65 && s[j] <= 90 || s[j] >= 97 && s[j] <= 122) ){
                i++;
                j--;
            }
            
        }
        return s;
    }
};