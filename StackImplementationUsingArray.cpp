#include <iostream>

using namespace std;
void push(int *stack, int *top, int stack_size){
    if(*top == stack_size - 1){
        cout<<"stack is full";
    }else{
        int val;
        cout<<"Enter the value in to the stack"<<endl;
        cin>>val;
        stack[++(*top)] = val;
    }
}

void pop(int *stack, int *top){
    if(*top == - 1){
        cout<<"stack is empty";
    }else{
        stack[(*top)--];
    }
}
void display(int *stack, int *top){
    if(*top == - 1){
        cout<<"stack is empty";
    }
    for(int i = 0; i <= *top; i++){
        cout<<stack[i]<<" ";
    }
}
int main()
{
    int stack[10], top = -1, option;
    cout<<"1. "<<"Push element into Stack"<<endl;
    cout<<"2. "<<"Pop element into Stack"<<endl;
    cout<<"3. "<<"Display element into Stack"<<endl;
    
    
    do{
        cout<<"Enter option"<<endl;
        cin>>option;
        switch(option){
            case 1:push(stack, &top, 10);
            break;
            
            case 2:pop(stack, &top);
            break;
            
            case 3:display(stack, &top);
            break;
            
            case 4: cout<<"exit";
            break;
            
            default:
            cout<<"Please enter valid option"<<endl;
            
        }
    }while(option != 4);
    return 0;
}
