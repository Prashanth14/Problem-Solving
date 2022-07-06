#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
};

Node* InsertAtBegin(Node *head, int data){
    Node *newnode = new Node();
    newnode -> data = data;
    newnode -> prev = nullptr;
    newnode -> next = nullptr;
    if(!head){
        head = newnode;
        return head;
    }
    newnode -> next = head;
    head -> prev = newnode;
    head =  newnode;
    return head;
}

// Deleting a node at the Nth position
Node* DeleteAtNthPos(Node *head,int pos){
    if(!head)
        return nullptr;
    Node *temp = head;
    if(pos == 1){
        head = head -> next;
        delete temp;
        return head;
    }else{
        int c = 1;
        while(c < pos-1 && temp){
            temp = temp -> next;
            ++c;
        }
        Node *deletingNode = temp -> next;
        temp -> next = deletingNode -> next;
        if(deletingNode -> next)
            deletingNode -> next -> prev = temp;
        delete deletingNode;
        return head;
    }
    return head; 
}

//Printing the elelments of the List Iteratuvely
void Display(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//Print the elements of the List using Recursion Forward
void PrintEleRecursive(Node *head){
    if(!head)
        return;
    
    cout<<head -> data<<" ";
    PrintEleRecursive(head -> next);

}

//Print the elements of the List in Reverse using Recursion 
void PrintEleRevesreRecursive(Node *head){
    if(!head)
        return;
        
    PrintEleRevesreRecursive(head -> next);
    cout<<head -> data<<" ";
}

int main()
{
    Node *head = nullptr;
    cout<<"1. Insert at the begining"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"3. Display List using Recursion"<<endl;
    cout<<"4. Display List ele in reverse using Recursion"<<endl;
    cout<<"5. Delete node at Nth position"<<endl;
    cout<<"6. Exit"<<endl;
    while(1){
        cout<<"Enter the choice"<<endl;
        int ch;
        cin>>ch;
        switch(ch){
            case 1: int n;
                cout<<"Enter the number of elements to be inserted in the Linked List"<<endl;
                cin>>n;
                for(int i = 0; i < n; ++i){
                    int data;
                    cout<<"Enter the data to insert"<<endl;
                    cin>>data;
                    head = InsertAtBegin(head,data);
                }
                break;
            case 2:
                Display(head); 
                break;
            case 3:
                PrintEleRecursive(head);
                break;
            case 4:
                PrintEleRevesreRecursive(head);
                break;
            case 5:
                int pos;
                cout<<"Enter the position to delete a node"<<endl;
                cin>>pos;
                head = DeleteAtNthPos(head, pos);
                break;
            case 6:
                exit(0);
                break;
            default:
                cout<<"Please enter the valid option"<<endl;
                break;
        }
    }
    return 0;
}


