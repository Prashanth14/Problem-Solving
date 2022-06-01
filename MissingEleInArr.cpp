#include <iostream>

using namespace std;

int main()
{
    // Find Missing number in the  array
    int arr[6] = {3,2,6,5,1};
    int sum = 0;
    
    for(int i = 1; i <= 6 ; ++i){
        sum = sum + i;
        sum = sum - arr[i-1];
    }
    cout<<"The missing number in the array is "<<sum<<endl;
  return 0;
}