Given the head of a singly linked list, reverse the list, and return the reversed list.

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
  
    ListNode* reverseList(ListNode* head) {
        //--------Iterative method -------------- 9ms(execution time)
        if(head == NULL)
            return head;
        struct ListNode *prev = NULL, *nextnode;
        while(head != NULL){
            nextnode = head -> next;
            head -> next = prev;
            prev = head;
            head = nextnode;
        }
        return prev;
        
    }
};