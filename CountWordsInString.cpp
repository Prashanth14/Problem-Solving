#include <iostream>

using namespace std;

int main()
{
   string s = "hello";
   int last_was_space=1, count=0;
   for(int i=0; s[i]!='\0';i++){
       if(s[i] == ' '){
           if(!last_was_space){
               count++;
               last_was_space=1;
           }
       }else{
           if(s[i] !='\n'){
               last_was_space = 0;
           }
       }
   }
   if(!last_was_space){
       ++count;
   }
   
   cout<<"Number of words = "<<count;
}