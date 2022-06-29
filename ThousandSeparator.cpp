Given an integer n, add a dot (".") as the thousands separator and return it in string format.

Example 1:

Input: n = 987
Output: "987"
Example 2:

Input: n = 1234
Output: "1.234"
 

Constraints:

0 <= n <= 231 - 1

class Solution {
public:
    string thousandSeparator(int n) {
        if(n < 1000)
            return to_string(n);
        string res = "";
        string output = "";
        int count = 0;
        if(n >= 1000){
            string num = to_string(n);
            for(int j = num.length() - 1; j >= 0; --j){
                count++;
                if(count == 3 && j != 0){
                    output = output + num[j] + ".";
                    count = 0;
                }else
                    output += num[j];
            }
        }
        reverse(output.begin(), output.end());
        
        return output;
    }
};