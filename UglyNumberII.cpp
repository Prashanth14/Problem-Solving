// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

// Given an integer n, return the nth ugly number.

// Example 1:

// Input: n = 10
// Output: 12
// Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.
// Example 2:

// Input: n = 1
// Output: 1
// Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.


class Solution {
public:
    int nthUglyNumber(int n) {
        int ugly[n];
        ugly[0] = 1;
        int count = 1;
        
        int idx2 = 0, idx3 = 0, idx5 = 0;
        
        while(count < n){
            int next2 = ugly[idx2] * 2;
            int next3 = ugly[idx3] * 3;
            int next5 = ugly[idx5] * 5;
            
            int next = min({next2, next3, next5});
            
            if(next == next2)
                idx2++;
            if(next == next3)
                idx3++;
            if(next == next5)
                idx5++;
            
            ugly[count++] = next;
        }
        return ugly[n-1];
    }
};
