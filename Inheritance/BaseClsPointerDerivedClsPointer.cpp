// Example program
#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Base{
    public:
        void func1(){
            cout<<"Function One from BASE class"<<endl;
        }
        
        void func2(){
            cout<<"Function Two from BASE class"<<endl;
        }
        
        void func3(){
            cout<<"Function Three from BASE class"<<endl;
        }
};

class Derived : public Base{
    public:
        void func4(){
            cout<<"Function Four from DERIVED class"<<endl;
        }
        
        void func5(){
            cout<<"Function FIVE from DERIVED class"<<endl;
        }
};

int main(){
    Base *p;
    p = new Derived;
    p->func1();
    p->func2();
    p->func3();
    //p->func4(); error: no member named 'func4' in 'Base' p->func4();, so we cannot access derived class function with Base class pointer
    
    return 0;
}