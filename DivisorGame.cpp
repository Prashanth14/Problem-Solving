// Alice and Bob take turns playing a game, with Alice starting first.

// Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

// Choosing any x with 0 < x < n and n % x == 0.
// Replacing the number n on the chalkboard with n - x.
// Also, if a player cannot make a move, they lose the game.

// Return true if and only if Alice wins the game, assuming both players play optimally.

 

// Example 1:

// Input: n = 2
// Output: true
// Explanation: Alice chooses 1, and Bob has no more moves.
// Example 2:

// Input: n = 3
// Output: false
// Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.


class Solution {
public:
    bool divisorGame(int n) {
        if(n % 2 == 0)
            return true;
        return false;
    }
};


// in a vey intuitive way .
// if n=1, then alice can't move , he will lose the game
// if n=2 , then alice can move 1 ,and bob can't move afterthat, alice will win
// if n=3 , then alice can move only 1 (as it has ony one factor btw 0 and 3 both are exclusive ) , then other player proceeed optimally as same as above for n=2. and alice will lose the game

// let me generalise it

// please read it very carefully ,

// An odd number has a set of only odd factors ( points to be noted)
// as we have to subtract its factor one by one from n to proceed ahead ,
// n - odd_factor , would be always even
// for example 33 = 311 , 81 = 3333 ,
// as we know (odd1 - odd2) difference of two odd nos. will always be even ,
// hence if you get an odd number , the next playerwill get definitely even no.
// this process continues till n=1
// Interestingly those who start with even number will always finish thegame with even number , as he can produce an odd number (n-1) for the opposition player .
// hence if you get an even number , you will win otherwise you will lose the game :(

// hope you will understand the code as well as explaination .