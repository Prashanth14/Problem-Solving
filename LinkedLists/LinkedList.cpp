
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
struct Node {
    int data;
    Node *next;
};
 Node *head = nullptr;
Node* InsertAtBegin(Node *head,int data){
    Node *newnode = new Node();
    newnode -> data = data;
    newnode -> next = head;
    head = newnode;
    return head;
}

Node* InsertAtNthPos(Node *head,int data, int pos){
    Node *temp = head;
    Node *newnode = new Node();
    newnode -> data = data;
    if(pos == 1){
        newnode -> next = head;
        head = newnode;
        return head;
    }else{
        int c = 1;
        while(c < pos-1 && temp){
            temp = temp -> next;
            ++c;
        }
        if(temp){
            newnode -> next = temp -> next;
            temp -> next = newnode;
            return head;
        }
    }
   return head;
}

Node* DeleteAtNthpos(Node *head, int pos){
    Node *temp = head;
    if(pos == 1){
        head = temp->next;
        delete temp;
        return head;
    }else{
        int c = 1;
        while(c < pos-1 && temp){
            temp = temp -> next;
            ++c;
        }
        Node *deleting_node = temp->next;
        temp -> next = deleting_node -> next;
        delete deleting_node;
        return head;
    }
    return head;
}

Node* reverseIterative(Node *head){
    if(!head)
        return nullptr;
    Node *temp = head;
    Node *next , *prev = nullptr;
    while(temp){
        next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}

void ReverseListRecursive(Node *p){
    if(!p || !p -> next ){
        head = p;
       return;
    }
    ReverseListRecursive(p -> next);
    Node *q = p -> next;
    q -> next = p;
    p -> next = nullptr;
}

void printListEleReverseRecursive(Node *head){
    if(!head)
        return;
    
    printListEleReverseRecursive(head -> next);
    cout<< head -> data<<" ";  
}

void printListEleRecursive(Node *head){
    if(!head)
        return;
        
    cout<< head -> data<<" ";  
    printListEleRecursive(head -> next);
}

void Display(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
}

int main()
{ 
    cout<<"1. Insert at the begining"<<endl;
    cout<<"2. Insert at Nth position"<<endl;
    cout<<"3. Delete at Nth position"<<endl;
    cout<<"4. Display"<<endl;
    cout<<"5. Reverse List by Iterative method"<<endl;
    cout<<"6. Reverse List by Recursive method"<<endl;
    cout<<"7. Print List elements Reverse by Recursive method"<<endl;
    cout<<"8. Print elements of the list by Recursion"<<endl;
    cout<<"9. Exit"<<endl;
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
                cout<<"Enter the valid position to insert a Node in the Linked List"<<endl;
                int data;
                cout<<"Enter the data to insert"<<endl;
                cin>>data;
                cout<<"Enter the position to insert"<<endl;
                int pos;
                cin>>pos;
                head = InsertAtNthPos(head, data, pos);
                break;
            case 3:
                cout<<"Enter the valid position to delete a Node in the Linked List"<<endl;
                cout<<"Enter the position to delete"<<endl;
                int posi;
                cin>>posi;
                head = DeleteAtNthpos(head, posi);
                break;
            case 4:
                Display(head);   
                break;
            case 5:
                head = reverseIterative(head);
                break;
            case 6:
                ReverseListRecursive(head);
                break;
            case 7:
                printListEleReverseRecursive(head);
                break;
            case 8:
                printListEleRecursive(head);
                break;
            case 9:
                exit(0);
                break;
            default:
                cout<<"Please enter the valid option"<<endl;
                break;
        }
    }
    
    return 0;
}




