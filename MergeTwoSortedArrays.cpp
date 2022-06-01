
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int a[5]= {3, 4, 5, 6, 9};
    int b[4] = {1, 2, 5, 9};
    vector<int> res_arr;
    int i=0, j=0;
    
    while(i< 5 && j <4){
        if(a[i] < b[j]){
                res_arr.push_back(a[i++]);
        }else{
            res_arr.push_back(b[j++]);
        }
    }
    cout<< i<< j<<endl;
    while(i<5){
        res_arr.push_back(a[i++]);
    }
    
    while(j<4){
        res_arr.push_back(a[j++]);
    }
            
    for (auto i = res_arr.begin(); i != res_arr.end(); ++i)
        cout << *i << " ";

    return 0;
}
