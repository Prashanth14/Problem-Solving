#include <iostream>

using namespace std;

int main()
{
   string s = "MALAYalam";
   int l = s.length();
   int t=0;
   
   //Converting all the characters in the string to lowercase
   for(int i=0; s[i]!='\0'; i++){
       if(s[i]>=65 && s[i]<=90){
           s[i] +=32;
       }
   }
   // check str = rev(str)
   for(int i=0; i<l/2;i++){
       if(s[i] != s[l-1]){
           t++;
       }
       l--;
   }
   
   if(t != 0){
       cout<<"Not a Palindrome"<<endl;
   }else{
       cout<<"Palindrome"<<endl;
   }
   
}