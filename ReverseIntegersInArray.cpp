
#include <iostream>

using namespace std;
// void swap(int *p, int *q){
//     int t = *p;
//     *p = *q;
//     *q=t;
// }
int main()
{
    
   int size;
   cout<<"Enter the value of size of an array"<<endl;
   cin>>size;
   if(size<=0){
       cout<<"Enter the valid size of array"<<endl;
       return 0;
   }
   int A[size];
   
   cout<<"Enter the values in the array"<<endl;
   for(int i=0; i<size; i++){
       cin>>A[i];
   }
   
   cout<<"Elements in the array are..."<<endl;
   for(int i=0; i<size; i++){
       cout<<A[i]<<"  ";
   }
   cout<<endl;
   //Reverse elements in the array 
   int t;
   for(int i=0; i<size/2; i++){
    //   swap(A[i], A[size-1-i]);
         t=A[i];
         A[i]=A[size-i-1];
         A[size-i-1]=t;
    }
    
    cout<<"Elements in the array after reverse are..."<<endl;
   for(int i=0; i<size; i++){
       cout<<A[i]<<"  ";
   }
   

    return 0;
}
