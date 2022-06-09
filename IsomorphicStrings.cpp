// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true



class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        
        for(int i = 0; i < s.size(); i++){
            map1[s[i]] = i+1;
            map2[t[i]] = i+1;
        }
        
        for(int i = 0; i< s.size(); i++){
            if(map1[s[i]] != map2[t[i]])
                return false;
        }
        return true;
    }
};