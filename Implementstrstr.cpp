// Implement strStr().

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Clarification:

// What should we return when needle is an empty string? This is a great question to ask during an interview.

// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

 

// Example 1:

// Input: haystack = "hello", needle = "ll"
// Output: 2
// Example 2:

// Input: haystack = "aaaaa", needle = "bba"
// Output: -1


#include<string.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0;
        if(haystack.size() < needle.size())
            return -1;
        if(!needle.size())
            return 0;
        
        for(int pos = 0; pos < haystack.size(); ++pos){
            if(haystack[pos] == needle[0]){
                start = pos;
            
                while(start - pos != needle.size() && start != haystack.size() && haystack[start] == needle[start - pos]){
                    ++start;
                 }
            
                if(start - pos == needle.size()){
                   return pos;
                 }
            }
                
        }
        return -1;
    }
    
};