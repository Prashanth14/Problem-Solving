// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;

//Worst case Time complexity is O(n^2) for reverse sorted input ex:- 50,40,30,20,10
//Time complexity is O(n) for sorted input ex:-10,20,30,40,50  
void InsertionSort(vector<int>& nums){
    for(int j = 1; j < nums.size(); ++j){
        int key = nums[j];
        int i = j-1;
        while(i >= 0 && nums[i] > key){
            nums[i + 1] = nums[i];
            i--;
        }
        nums[i + 1] = key;
    }
}
int main()
{
  vector<int> nums({9,6,5,0,8,2,7,1,3});
  InsertionSort(nums);
  cout<<"After sorting elements in the array are "<<endl;
  for(int i = 0; i < nums.size(); ++i){
      cout<<nums[i]<<" ";
  }
  return 0;
}