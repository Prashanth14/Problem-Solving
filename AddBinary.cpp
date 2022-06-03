// Given two binary strings a and b, return their sum as a binary string.
// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"


class Solution {
public:
    string addBinary(string a, string b) {
       int i = a.length()-1;
        int j = b.length()-1, carry = 0;
        string s;
        
         while(i >= 0 && j >= 0){
            if(a[i] == '1' && b[j] == '1' && carry == 0){
                s.push_back('0');
                carry = 1;
            }else if(a[i] == '1' && b[j] == '1' && carry == 1){
                s.push_back('1');
                carry = 1;
            }else if(a[i] == '0' && b[j] == '1' && carry == 1){
                s.push_back('0');
                carry = 1;
            }else if(a[i] == '1' && b[j] == '0' && carry == 1){
                s.push_back('0');
                carry = 1;
            }else if(a[i] == '1' && b[j] == '0' && carry == 0){
                s.push_back('1');
                carry = 0;
            }else if(a[i] == '0' && b[j] == '1' && carry == 0){
                s.push_back('1');
                carry = 0;
            }else if(a[i] == '0' && b[j] == '0' && carry == 1){
                s.push_back('1');
                carry = 0;
            }else if(a[i] == '0' && b[j] == '0' && carry == 0){
                s.push_back('0');
                carry = 0;
            }
            i--;j--;

         }
         while(i >= 0){
             if(a[i] == '0' && carry == 1){
                 s.push_back('1');
                 carry = 0;
             }else if(a[i] == '1' && carry == 1){
                 s.push_back('0');
                 carry = 1;
             }else if(a[i] == '1' && carry == 0){
                 s.push_back('1');
                 carry = 0;
             }else if(a[i] == '0' && carry == 0){
                 s.push_back('0');
                 carry = 0;
             }
             --i;
         }
         
         while(j >= 0){
             if(b[j] == '0' && carry == 1){
                 s.push_back('1');
                 carry = 0;
             }else if(b[j] == '1' && carry == 1){
                 s.push_back('0');
                 carry = 1;
             }else if(b[j] == '1' && carry == 0){
                 s.push_back('1');
                 carry = 0;
             }else if(b[j] == '0' && carry == 0){
                 s.push_back('0');
                 carry = 0;
             }
             --j;
         }
         
         if(carry == 1){
             s.push_back('1');
         }
         reverse(s.begin(), s.end());
        return s;
    }
};