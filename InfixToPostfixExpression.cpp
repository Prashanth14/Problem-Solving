#include<iostream>
#include<stack>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int main() {
    string str = "((32+34*12)*(1+2)/(1+1))*(23-21)";
    stack<char> s;
    string res = "";
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >='a' && str[i]<='z' || str[i] >='A' && str[i]<='Z' || str[i] >='0' && str[i]<='9'){
            res+= str[i];
        }else if(str[i]=='('){
            s.push(str[i]);
        }else if(str[i]==')'){
            while(s.top()!='('){
                res += s.top();
                s.pop();
            }
            s.pop();//to remove left parantheses
        }else{
            while(!s.empty() && prec(str[i]) <= prec(s.top())){
                if(str[i] == '^' && s.top() == '^')
                    break;
                else{
                    res += s.top();
                    s.pop();
                }
            }
            s.push(str[i]);
        }
    }
    
    while( !s.empty() ){
        res += s.top();
        s.pop();
    }
    
    cout<<res;
    return 0;
}