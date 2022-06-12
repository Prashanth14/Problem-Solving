// Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

// If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

 

// Example 1:

// Input: s = "abcdefg", k = 2
// Output: "bacdfeg"
// Example 2:

// Input: s = "abcd", k = 2
// Output: "bacd"
 

// Constraints:

// 1 <= s.length <= 104
// s consists of only lowercase English letters.
// 1 <= k <= 104


class Solution {
public:
    void swapping(int i, int k, string &s){
       for(int j = 0; j < k/2; j++){
           swap(s[j + i], s[i + k - j - 1]);
       }        
}
    string reverseStr(string s, int k) {
        int i = 0;
         while(i < s.size()){
             if(i + k > s.size()){
                swapping(i, s.size() - i, s);
                 break;
             }
             swapping(i, k, s);
             i = i + 2 * k;
         }
     
        return s;
    }
};