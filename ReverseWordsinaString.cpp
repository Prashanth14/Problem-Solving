// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:

// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 

// Constraints:

// 1 <= s.length <= 104
// s contains English letters (upper-case and lower-case), digits, and spaces ' '.
// There is at least one word in s.


class Solution {
public:

    string reverseWords(string s) {
//         int l = s.length()-1; 
//         //Rverse the entire string
//         for(int i = 0; i < l; ){
//             char c = s[i];
//             s[i] = s[l];
//             s[l] = c;
//             i++;
//             l--;
//         }
//      // reversing the words in the string 
//        int j = 0;
//         for(int i = 0; s[i] !='\0'; ){
//             if(s[i] != ' '){
//                 i++;
//                 if(i+1 == s.length()){
//                    int k = i;
//                    while(j < k){
//                        char c = s[k];
//                        s[k] = s[j];
//                        s[j] = c;
//                        j++;
//                        k--;
//                    }
//                   break;
//                 }
//             }else{
//                 int k = i-1;
                
//                 while(j < k){
//                     char c = s[k];
//                     s[k] = s[j];
//                     s[j] = c;
//                     j++;
//                     k--;
//                 }
//                 j = i+1;
//                 i++;
//             }
//         }
         // removing spaces 
        while(s[0]==' ')
           s.erase(s.begin());
        int i=0;
        for(int i=0;i<s.size();i++)
        {
        if(i+1<s.size() && s[i]==' ' && s[i+1]==' ')
            s.erase(s.begin()+i),i--;
        }
        // cout<<s<<endl;
        reverse(s.begin(),s.end());
        while(s[0]==' ')
            s.erase(s.begin());
        // cout<<s<<endl;

        int start=0,end=0;
         i=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                end=i;
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        reverse(s.begin()+start,s.end());
    return s;
    }
};