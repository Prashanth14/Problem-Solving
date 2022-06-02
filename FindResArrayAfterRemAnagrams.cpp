// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase using all the original letters exactly once. For example, "dacb" is an anagram of "abdc".

 

// Example 1:

// Input: words = ["abba","baba","bbaa","cd","cd"]
// Output: ["abba","cd"]
// Explanation:
// One of the ways we can obtain the resultant array is by using the following operations:
// - Since words[2] = "bbaa" and words[1] = "baba" are anagrams, we choose index 2 and delete words[2].
//   Now words = ["abba","baba","cd","cd"].
// - Since words[1] = "baba" and words[0] = "abba" are anagrams, we choose index 1 and delete words[1].
//   Now words = ["abba","cd","cd"].
// - Since words[2] = "cd" and words[1] = "cd" are anagrams, we choose index 2 and delete words[2].
//   Now words = ["abba","cd"].
// We can no longer perform any operations, so ["abba","cd"] is the final answer.
// Example 2:

// Input: words = ["a","b","c","d","e"]
// Output: ["a","b","c","d","e"]
// Explanation:
// No two adjacent strings in words are anagrams of each other, so no operations are performed.

class Solution {
public:
    bool isAnagram(string a, string b){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i< words.size(); i++){
            if(ans.size() == 0 || !isAnagram(words[i], ans.back())){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};