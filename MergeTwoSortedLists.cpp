// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

// Example 1:

// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]
 
// Constraints:

// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both list1 and list2 are sorted in non-decreasing order.


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode *l1 = list1, *l2 = list2;
        // if List1 is empty then return list2
        if(!l1)
            return l2;
        // if list2 is empty then return list1
        if(!l2)
            return l1;
        
        struct ListNode *head = l1;
        if(l1 -> val > l2 -> val){
            head = l2;
            l2 = l2 -> next;
        }else{
            l1 = l1 -> next;
        }
        
        struct ListNode *cur = head;
        
        while(l1 && l2){
            if(l1 -> val < l2 -> val){
                cur -> next = l1;
                l1 = l1 -> next;
            }else{
                cur -> next = l2;
                l2 = l2 -> next;
            }
            cur = cur -> next;
        }
        
        if(!l1)
            cur -> next = l2;
        else if(!l2)
            cur -> next = l1;

        
        return head;
        
    }
};
