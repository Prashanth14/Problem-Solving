#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1, 4, 8, 9, 11, 14, 16};
    int arr2[] = {2, 3, 6, 7,10};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int t;
    
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr1[i] > arr2[j]){
                t = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = t;
              }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j= 0; j<n; j++){
            if(arr2[i] < arr2[j]){
                t = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = t;
            }
        }
    }
    
    
    for(int i = 0; i < m; i++){
        cout<<arr1[i]<<" ";
    }
    
    for(int j = 0; j < n; j++){
        cout<<arr2[j]<<" ";
    }
    
    return 0;
}
