// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:

// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:

// Input: num1 = "0", num2 = "0"
// Output: "0"



class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1, j = num2.length()-1, carry = 0;
        string str;
        while(i >= 0 || j >= 0 || carry){
            int a = (i >= 0)? num1[i--] - '0': 0;
            int b = (j >= 0)? num2[j--] - '0' : 0;
            int sum = a + b + carry;
            str.append(to_string(sum % 10));
            carry = sum / 10;
        }
        reverse(str.begin(), str.end());
        
        
        return str;
    }
};