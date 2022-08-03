// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;

//Worst case Time complexity is O(n^2) for reverse sorted input ex:- 50,40,30,20,10
//Time complexity is O(n) for sorted input ex:-10,20,30,40,50  
void bubbleSort(vector<int>& nums){
    int n = nums.size();
    int swapped = 0;
    for(int i = 0; i < n; ++i){
        swapped = 0;
        for(int j = 0; j < n - i - 1; ++j){
            if(nums[j] > nums[j + 1]){
                int temp = nums[j];
                nums[j] = nums[j+ 1];
                nums[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}
int main()
{
  vector<int> nums({50, 40,30, 20, 10});
  bubbleSort(nums);
  cout<<"After sorting elements in the array are "<<endl;
  for(int i = 0; i < nums.size(); ++i){
      cout<<nums[i]<<" ";
  }
  return 0;
}