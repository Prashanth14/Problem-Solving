// We define the usage of capitals in a word to be right when one of the following cases holds:

// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital, like "Google".
// Given a string word, return true if the usage of capitals in it is right.

// Example 1:

// Input: word = "USA"
// Output: true
// Example 2:

// Input: word = "FlaG"
// Output: false

class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0, lower = 0;
        bool first = isupper(word[0]);
        
        for(int i = 0; i < word.length(); i++){
            if(word[i] >= 65 && word[i] <= 90 ){
                upper++;
            }
            if(word[i] >= 97 && word[i] <= 122){
                lower++;
            }
        }
        if(upper == word.length() || lower == word.length() || (first && lower == word.length()-1) )
            return true;
        
        return false;
    }
};