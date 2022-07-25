// Example program
#include <iostream>
#include <string>
#include<unordered_set>
#include<vector>
using namespace std;
long findMaximumSum(vector<int>& stockPrice, int k){
    unordered_set<int> map;
    long left = 0, sum =0, res = -1;
    for(int right = 0; right < stockPrice.size(); right++){
        while(left < right && (map.count(stockPrice[right]) || map.size() >= k)){
            sum -= stockPrice[left];
            map.erase(stockPrice[left]);
            left++;
        }
        sum += stockPrice[right];
        map.insert(stockPrice[right]);
        if(map.size() == k){
            res = max(res , sum);
        }
        for (auto itr = map.begin(); itr != map.end(); itr++) {
            cout << *itr << " ";
        }
        cout<<endl;
    }
    
    return res;
}
int main()
{
  vector<int> stockPrices({1,2,7,7,4,3,6});
  int k = 3;
  long maxSum = findMaximumSum(stockPrices, k);
  cout<<"The Maximim Sum is "<<maxSum<<endl;
  return 0;
}


