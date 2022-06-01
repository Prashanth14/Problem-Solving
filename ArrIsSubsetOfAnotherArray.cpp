#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 1, 7, 3};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    unordered_set<int> s;
    
    for(int i = 0; i < m; i++){
        s.insert(arr1[i]);
    }
    int p = s.size();
    
    for(int j = 0; j < n; j++){
        s.insert(arr2[j]);
    }
    
    if(p == s.size()){
        cout<<"arr2 is subset of arr1"<<endl;
    }else{
        cout<<"arr2 is not subset of arr1"<<endl;
    }
    
    return 0;
}
