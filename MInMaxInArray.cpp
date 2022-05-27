#include <iostream>

using namespace std;

// Maximum value in the array
// int max(int *a, int size){
//     int max_val = a[0];
//     for(int i=1; i<size; i++){
//       if(a[i]>max_val)
//             max_val=a[i];
//     }
//     return max_val;
// }

// Minimum value in the array
// int min(int *a, int size){
//     int min_val = a[0];
//     for(int i=1; i<size; i++){
//       if(a[i]<min_val)
//             min_val=a[i];
//     }
//     return min_val;
// }

int main()
{
    int size=11;
    int A [11] = {1,2,3,4,5,-2,-10,11,22,-44,-12};
    //Finding Max and Min element in the array
    // int max_val = max(A,size);
    // int min_val = min(A, size);
    
    
    int max, min,i=0;
    if(size % 2 == 0){
        if(A[i]>A[i+1]){
            max=A[i];
            min=A[i+1];
        }else{
            max=A[i+1];
            min=A[i];
        }
        i=2;
    }else{
        max=A[0], min=A[0], i=1;
    }
    
    for(i;i<size-1;i++){
        if(A[i]>A[i+1]){
            if(A[i]>max){
                max=A[i];
            }
            if(A[i+1]<min){
                min=A[i+1];
            }
        }else{
            if(A[i+1]>max){
                max=A[i+1];
            }
            if(A[i]<min){
                min=A[i];
            }
        }
    }
    
    
    cout<<"Maximum Value in the array = "<<max<<endl;
    cout<<"Minimum Value in the array = "<<min<<endl;
   

    return 0;
}
