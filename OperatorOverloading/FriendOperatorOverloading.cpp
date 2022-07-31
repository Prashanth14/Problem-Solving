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
        
        //display Complex number
        void display(){
            cout<<real<<"+i"<<img<<endl;
        }
        
        // Add complex numbers using friend operator
        friend Complex operator+(Complex c1, Complex c2);
};

//Add two complex numbers
Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
 Complex c1(5,3), c2(10,5), c3;
 c3 = c1+c2;
 c3.display();
 return 0;
}


