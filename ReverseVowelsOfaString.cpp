// 345. Reverse Vowels of a String
// Easy

// 1643

// 1858

// Add to List

// Share
// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.
// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"




class Solution {
public:
    bool check(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            return true;
        }else{
            return false;
        }
    }
    
    string reverseVowels(string s) {
        int left = 0, right = s.length()-1;
        char swap;
        while(left <= right){
            if(check(s[left]) == true && check(s[right]) == true){
                swap = s[left];
                s[left] = s[right];
                s[right] = swap;
                left++;
                right--;
             }
            else if(check(s[left]) == true){
                right--;
            }else{
                left++;
            }
        }
        return s;
    }
};
