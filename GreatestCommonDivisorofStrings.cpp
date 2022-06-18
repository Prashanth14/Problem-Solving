// For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

// Example 1:

// Input: str1 = "ABCABC", str2 = "ABC"
// Output: "ABC"
// Example 2:

// Input: str1 = "ABABAB", str2 = "ABAB"
// Output: "AB"
// Example 3:

// Input: str1 = "LEET", str2 = "CODE"
// Output: ""
 

// Constraints:

// 1 <= str1.length, str2.length <= 1000
// str1 and str2 consist of English uppercase letters.



class Solution {
public:
    int gcdofStringLengths(int min, int max){
         while(1){
            int rem = max % min;
            if(rem == 0)
                break;
            
            if(rem > min){
                max = rem;
            }else{
                max = min;
                min = rem;
            }
        }
        return min;
    }
    
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length(), l2 = str2.length(), gcd;
        if(l1 <= l2){
            gcd = gcdofStringLengths(l1, l2);
        }else{
            gcd = gcdofStringLengths(l2, l1);
        }
        
        if(str1 + str2 == str2 + str1){
            return str1.substr(0, gcd);
        }
        return "";
    }
};