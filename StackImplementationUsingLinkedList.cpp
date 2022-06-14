#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void push( ){
    int val;
    cout<<"Enter value"<<endl;
    cin>>val;
    struct Node *newnode = new Node();
    newnode -> data = val;
    //if linked list is empty
    if(!head){
        head = newnode;
    }else{
        newnode -> next = head;
        head = newnode;
    }
}

void pop( ){
    //if List is empty
    if(!head){
        cout<<"List is Empty"<<endl;
    }else{
        struct Node *temp = head;
        head = head -> next;
        free(temp);
    }
}


void display( ){
    //if List is empty
    if(!head){
        cout<<"List is Empty"<<endl;
    }else{
        struct Node *temp = head;
        while(temp->next){
            cout<<temp->data<<"->";
            temp = temp -> next;
        }
        cout<<temp->data;
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
            case 1:push();
            break;
            
            case 2:pop();
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
