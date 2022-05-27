#include <iostream>

using namespace std;
void swap(int *p, int *q){
    int t = *p;
    *p = *q;
    *q=t;
}
int main()
{
    
   int size=5;
   int A[5] = {1,2,3,4,5};
   //Reverse elements in the array 
   int t;
   for(int i=0; i<size/2; i++){
     swap(A[i], A[size-1-i]);
        //  t=A[i];
        //  A[i]=A[size-i-1];
        //  A[size-i-1]=t;
    }
    
    cout<<"Elements in the array after reverse are..."<<endl;
   for(int i=0; i<size; i++){
       cout<<A[i]<<"  ";
   }
   

    return 0;
}