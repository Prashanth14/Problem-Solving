A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.


Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
Example 2:

Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
 

Constraints:

2 <= s.length <= 200
s consists of lowercase and uppercase English letters, spaces, and digits from 1 to 9.
The number of words in s is between 1 and 9.
The words in s are separated by a single space.
s contains no leading or trailing spaces.




class Solution {
public:
    string sortSentence(string s) {
        int n = s.length();
        //map will store the elements in the sorted manner(keys(numbers) will be sorted below)
        map<int, string> words;
        string str ="";
        for(int i = 0; i < n; i++){
            //store the number of the last word in the key , word in the corresponding key using map
            if(i+1 == n){
                int key = s[i] - 48;
                words[key] = str;
            }
            // If character is a number then don't concatenate to str(word)
            if(s[i] >= '0' && s[i]<='9'){
                continue;
            }else{
                if(s[i] != ' ')
                    str += s[i];
            }
            //storing keys and corresponding words in the map
            if(s[i] == ' ' && i != n){
                int key = s[i-1] - 48;
                words[key] = str;
                str = "";
            }
        }
        
        // concatenate all the words in the map and create the sentence
        string res = "";
        for (auto x : words){
            if(x.first != words.size())
                res = res + x.second + ' ';
            else
                res = res + x.second ;
        }
        return res;
    }
};




