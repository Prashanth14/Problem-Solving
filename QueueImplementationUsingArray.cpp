#include <iostream>
int queue[4];
int n = 4;// size of the array varies
int rear = 0, front = 0;
using namespace std;

void enqueue(){
    rear = (rear + 1) % n;
    if(rear == front){
        cout<<"-----------------------Queue is full----------------"<<endl;
        if(rear == 0){
            rear = n -1;
        }else{
            rear = rear - 1;
        }
    }else{
        int val;
        cout<<"Enter the value"<<endl;
        cin>>val;
        queue[rear] = val;
    }
}

void dqueue(){
    if(front == rear){
        cout<<"-----------------------Queue is empty-------------------"<<endl;
    }else{
        int item;
        front = front + 1;
        item = queue[front];
        cout<<"The delelted element is "<<item<<endl;
    }
}

void display(){
    if(front == rear){
        cout<<"------------------------Queue is empty---------------------"<<endl;
    }else{
        int i = front, j = rear;
        while(i < j){
            cout<<queue[++i]<<endl;
        }
    }
}

int main()
{
    
    cout<<"1. "<<"Push element into Stack"<<endl;
    cout<<"2. "<<"Pop element into Stack"<<endl;
    cout<<"3. "<<"Display element into Stack"<<endl;
    int option;
    do{
        cout<<"Enter option"<<endl;
        cin>>option;
        switch(option){
            case 1:enqueue();
            break;
            
            case 2:dqueue();
            break;
            
            case 3:display();
            break;
            
            case 4: cout<<"exit";
            break;
            
            default:
            cout<<"Please enter valid option"<<endl;
            
        }
    }while(option != 4);
    return 0;
}
