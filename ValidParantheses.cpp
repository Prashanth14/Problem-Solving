// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false


class Solution {
public:
    bool isValid(string s) {
        vector<char> arr;
        
        for(int i = 0; i <s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                arr.push_back(s[i]);
            }else{
                if(arr.size() == 0){
                    return false;
                }else{
                    if(arr.back() == '(' && s[i] ==')' || arr.back() == '[' && s[i] ==']' || arr.back() == '{' && s[i] =='}'){
                    arr.pop_back();
                    }else{
                        return false;
                    }
                }
            }
                
        }
        return arr.empty();
    }
};