// Given a pattern and a string s, find if s follows the same pattern.

// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

// Example 1:

// Input: pattern = "abba", s = "dog cat cat dog"
// Output: true
// Example 2:

// Input: pattern = "abba", s = "dog cat cat fish"
// Output: false
// Example 3:

// Input: pattern = "aaaa", s = "dog cat cat dog"
// Output: false
 

// Constraints:

// 1 <= pattern.length <= 300
// pattern contains only lower-case English letters.
// 1 <= s.length <= 3000
// s contains only lowercase English letters and spaces ' '.
// s does not contain any leading or trailing spaces.
// All the words in s are separated by a single space.



class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int j = 0, n = s.size();
        vector<string> words;
        string str = "";
        
         while(j<n){
             if(s[j] == ' '){
                 words.push_back(str);
                 str = "";
             }else if(s[j] != ' '){
                 str += s[j];
             }
             j++;
         }
        words.push_back(str);
        
        if(pattern.length() != words.size())
            return false;
        
        map<char, string> mp;
        int i = 0;
        while(pattern[i] != '\0'){
            if(mp.find(pattern[i]) != mp.end()){
                if(mp[pattern[i]] != words[i])
                    return false;
            }
            
            mp[pattern[i]] = words[i];
            ++i;
        }
        
        set<char> pattern_keys;
        set<string> s_words;
        
        for(auto &x: mp){
            pattern_keys.insert(x.first);
            s_words.insert(x.second);
        }
        
        
        if(pattern_keys.size() != s_words.size())
            return false;
        
        return true;
    }
};
        
        
    