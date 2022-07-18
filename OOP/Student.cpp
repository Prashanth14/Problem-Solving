// Example program
#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
        int rollNum;
        string name;
        int physicsMarks;
        int chemistryMarks;
        int mathMarks;
    public:
        Student(int rollNum, string name, int physicsMarks, int chemistryMarks, int mathMarks){
            this -> rollNum = rollNum;
            this -> name = name;
            this -> physicsMarks = physicsMarks;
            this -> chemistryMarks = chemistryMarks;
            this -> mathMarks = mathMarks;
        }
       
    
    //Calculate Total Marks function declaration
        int totalMarks(){
            return physicsMarks + chemistryMarks + mathMarks;
        }
    
    //Calculate Grade function declaration
        char grade(){
            int avg = totalMarks()/3;
            if(avg > 60)
                return 'A';
            else if(avg <= 60 && avg > 40)
                return 'B';
            else
                return 'C';
        }
};

int main()
{
  int rollNum,physicsMarks, chemistryMarks, mathMarks;
  string name;
  cout<<"Enter the Roll Number"<<endl;
  cin>>rollNum;
 
  cout<<"Enter the name of the Student"<<endl;
  cin>>name;
  
  cout<<"Enter Physics, chemistry, and Math marks "<<endl;
  cin>>physicsMarks>>chemistryMarks>>mathMarks;
  Student s(rollNum, name, physicsMarks, chemistryMarks, mathMarks);
  
  cout<<"Total Marks = "<<s.totalMarks()<<endl;
  cout<<" Grade = " <<s.grade()<<endl;
}