// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least_so_far = INT_MAX, overall_profit = 0, pro_if_sold_tod = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < least_so_far){
                least_so_far = prices[i];
            }
            
            pro_if_sold_tod = prices[i] - least_so_far;
            if(overall_profit < pro_if_sold_tod){
                overall_profit = pro_if_sold_tod;
            }
        }
        return overall_profit;
    }
        
};