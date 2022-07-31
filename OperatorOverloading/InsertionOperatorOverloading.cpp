// Example program
#include <iostream>
#include <string>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        //Constructor
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        
        
         
        // Display complex number using Insertion Operator Overloading
        friend ostream & operator<<(ostream &out, Complex &c);
};


ostream & operator<<(ostream &out, Complex &c){
    out<<c.real<<"+i"<<c.img;
    return out;
}

int main()
{
 Complex c(5,3);
 //it is called as operator<<(cout, c)
 cout<<c;
 return 0;
}


