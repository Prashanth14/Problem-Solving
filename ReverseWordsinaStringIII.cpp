// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:

// Input: s = "God Ding"
// Output: "doG gniD"
 

// Constraints:

// 1 <= s.length <= 5 * 104
// s contains printable ASCII characters.
// s does not contain any leading or trailing spaces.
// There is at least one word in s.
// All the words in s are separated by a single space.



class Solution {
public:
    string reverse(string word){
        int i = 0, j = word.length()-1;
        char t;
        while(i <= j){
            t = word[i];
            word[i] = word[j];
            word[j] = t;
            i++;
            j--;
        }
        return word;
}
    string reverseWords(string s) {
        string str = "", rev = "";
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] != ' '){
                str += s[i];
            }else{
                rev += reverse(str) + ' ';
                str = "";
            }
        }
        rev += reverse(str);
       return rev;
    }
};