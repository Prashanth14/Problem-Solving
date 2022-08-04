#include <iostream>
#include <string>
#include<vector>
using namespace std;

class   Base{
    public:
        Base(){
            cout<<"From the default BASE constructor"<<endl;
        }
        Base(int x){
            cout<<"From the BASE parametarized constructor "<<x<<endl;
        }
};

class Derived:Base{
    public:
        Derived(){
            cout<<"From the default DERIVED constructor"<<endl;
        }
        Derived(int a){
            cout<<"From the parametarized DERIVED constructor "<<a<<endl;
        }
        Derived(int x, int a):Base(x){
            cout<<"From the parametarized DERIVED constructor2 "<<a<<endl;
        }
};

int main(){
    Derived d(10, 20);
}