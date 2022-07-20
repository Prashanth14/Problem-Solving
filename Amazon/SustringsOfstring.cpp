// Example program
#include <iostream>
#include <string>
#include<set>
#include<algorithm>
#include <iterator> 
using namespace std;

int subSequence(string str, string output[]){
    if(str.length() == 0){
        output[0] = "";
        return 1;
    }
        
    int smallOutputSize = subSequence(str.substr(1), output);
    
    for(int i = 0;  i < smallOutputSize; ++i){
        output[i + smallOutputSize] = str[0] + output[i];
    }
    return 2 * smallOutputSize;
}

int main(){
    string output[1000000];
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int outputsize = subSequence(s, output);
    set<string> uqiqStr;
    set<string>::iterator itr;
    
    for(int i = 0; i < outputsize; ++i){
        uqiqStr.insert(output[i]);
    }
    
    for(itr = uqiqStr.begin(); itr != uqiqStr.end(); itr++){
        cout<<*itr<<endl;
    }
    
    return 0;
}