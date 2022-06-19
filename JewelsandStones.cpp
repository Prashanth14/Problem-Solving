// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

// Letters are case sensitive, so "a" is considered a different type of stone from "A".

// Example 1:

// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3
// Example 2:

// Input: jewels = "z", stones = "ZZ"
// Output: 0
 

// Constraints:

// 1 <= jewels.length, stones.length <= 50
// jewels and stones consist of only English letters.
// All the characters of jewels are unique.

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //Brute force method Time complexity is O(n * m), we can solve even in better way.
        // int count = 0;
        // for(int i = 0; jewels[i] != '\0'; i++){
        //     for(int j = 0; stones[j] != '\0'; j++){
        //         if(jewels[i] == stones[j])
        //             count++;
        //     }
        // }
        // return count;
        
        // Optimized way because Time complexity is O(n+m)
        unordered_set<char> jewel;
        for(int i = 0; jewels[i] != '\0'; i++){
            jewel.insert(jewels[i]);
        }
        
        int count = 0;
        for(int j = 0; stones[j] != '\0'; j++){
            if(jewel.count(stones[j]) == 1)
                count++;
        }
        return count;
    }
};