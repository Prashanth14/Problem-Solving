// Given a number, transform it in two numbers p1 and p2 such that sum of p1 and p2 is minimum.
// Ex - 4523 - 59 ( 24 + 35)

// Example program
#include <iostream>
#include <string>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std;

int smallestSum(long long int n){
    if(n < 10)
        return n;
    vector<int> nums;
    while(n){
        nums.push_back(n % 10);
        n /= 10;
    }
    sort(nums.begin(), nums.end());
    int ns = nums.size();
    long long int n1 = 0;
    long long int n2 = 0;

    for (int i = 0; i < ns; i++)
    {
        if (i & 1)
            n1 = n1*10 + nums[i];
        else
            n2 = n2*10 + nums[i];
    }
    
    return n1 + n2;
}
int main()
{
  long long int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  long long int ss = smallestSum(n);
  cout<<"The smallest sum is "<<ss<<endl;
}


