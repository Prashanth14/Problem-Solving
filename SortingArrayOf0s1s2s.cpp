#include <iostream>

using namespace std;

int main()
{
    int arr[9] = {2, 1, 0, 2, 1, 0, 0, 1, 2};
    int t, l=0, m=0, h=9-1;
    while(m <= h){
        if(arr[m] == 2){
            t = arr[h];
            arr[h] = arr[m];
            arr[m] = t;
            h--;
        }else if(arr[m] == 1){
            m++;
        }else if(arr[m] == 0){
            t = arr[m];
            arr[m] = arr[l];
            arr[l] = t;
            l++;
        }
    }
    
    for( int i=0; i< 9; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
