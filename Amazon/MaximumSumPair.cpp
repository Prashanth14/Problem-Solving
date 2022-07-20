// Example program
#include <iostream>
#include <string>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std;
/*
Give a linked list, which has even number of nodes, please return the maximum sum of PAIR
A pair means the node[i] and node[n-i], which n is linked list length.
example: [1,2,3,4,9,11]
1st pair sum: 1 + 11 = 13
2nd pair sum: 2 + 9 = 11
3rd pair sum: 3 + 4 = 7
Therefore, return 13
*/

// Online IDE - Code Editor, Compiler, Interpreter
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

void printListEleRecursive(Node *head){
    if(!head)
        return; 
    cout<< head -> data<<" ";  
    printListEleRecursive(head -> next);
}
Node* reverseList(Node *head){
    if(!head)
        return NULL;
    Node *cur = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(cur){
        next = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
void MaxSumPair(Node *head){
    if(!head)
        cout<<0;
   //Approach 1 it takes Time complexity O(n), and  Space Complexity O(n)
    // Node *temp = head;
    // vector<int> arr;
    // while(temp){
    //     arr.push_back(temp -> data);
    //     temp = temp -> next;
    // }
    // int l = 0, h = arr.size() - 1;http://cpp.sh/#
    // int max = INT_MIN;
    // while(l < h){
    //     int sum = arr[l] + arr[h];
    //     if(sum > max)
    //         max = sum;
    //     l++;
    //     h--;
    // }
    // cout<<max;
    
    
    //Approach 2, Time complexity is O(n) and Space complexity is O(1)
    //find mid of the Linked List
    Node *fast = head;
    Node *slow = head;
    while(fast -> next && fast -> next -> next){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    //Now fast will be pointing to mid of the Linked List
    fast = slow -> next;
    slow -> next = nullptr;
    //Reverse half of the Linked List from mid
    fast = reverseList(fast);
    int maxVal = INT_MIN;
    slow = head;
    while(slow){
        int sum = max(maxVal, slow -> data + fast -> data);
        if(sum > maxVal)
            maxVal = sum;
        slow = slow -> next;
        fast = fast -> next;
    }
    cout<<maxVal;
}

int main()
{ 
    cout<<"1. Insert at the begining"<<endl;
    cout<<"2. Maximum Sum Pair"<<endl;
    cout<<"3. Print elements of the list by Recursion"<<endl;
    cout<<"4. Exit"<<endl;
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
                MaxSumPair(head);
                break;
            case 3:
                printListEleRecursive(head);
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Please enter the valid option"<<endl;
                break;
        }
    }
    
    return 0;
}






