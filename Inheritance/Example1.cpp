// Example program
#include <iostream>
#include <string>
using namespace std;
class Base{
    public:
        int a;
        void display(){
            cout<<"Display from Base Class "<<a<<endl;
        }
};

class Derived :public Base{
    public:
        void show(){
            cout<<"Show from derived Class"<<endl;
        }
};
int main()
{
//   Base b;
//   b.display();
    Derived d;
    d.a = 100;
    d.display();
    d.show();
  return 0;
}

