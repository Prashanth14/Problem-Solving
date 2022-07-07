// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

// Example 1:


// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]
// Example 2:


// Input: head = [1,1,1,2,3]
// Output: [2,3]
 

// Constraints:

// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted in ascending order.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        
        if(!head -> next)
            return head;
        
        if(head -> val == head -> next -> val){
            int val = head -> val;
            while(head && head->val == val){
                head = head -> next;
            }
            head = deleteDuplicates(head);
        }else{
            ListNode* temp = head, *prev = NULL;
            while(temp && temp -> next){
                if(temp -> val != temp -> next -> val){
                    prev = temp;
                    temp = temp -> next;
                }else{
                    int val = temp -> val;
                    while(temp && temp -> val == val){
                        temp = temp -> next;
                    }
                    prev -> next = temp;
                } 
            }
        }
        return head;
    }
};