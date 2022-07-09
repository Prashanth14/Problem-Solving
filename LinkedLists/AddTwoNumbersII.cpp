You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:

Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]
Example 2:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]
Example 3:

Input: l1 = [0], l2 = [0]
Output: [0]
 

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.
 

Follow up: Could you solve it without reversing the input lists?

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        
        while(temp1){
            s1.push(temp1 -> val);
            temp1 = temp1 -> next;
        }
        
        while(temp2){
            s2.push(temp2 -> val);
            temp2 = temp2 -> next;
        }
        ListNode *dummy = NULL;
        int sum = 0, carry = 0;
        while(!s1.empty() && !s2.empty()){
           
            int s1_top = s1.top();
            int s2_top = s2.top();
            sum = s1_top + s2_top + carry;
            ListNode *newnode = new ListNode(sum % 10);
            newnode -> next = dummy;
            dummy = newnode;
            carry = sum / 10;
            s1.pop();
            s2.pop();
        }
        while(!s1.empty()){
            int data = s1.top();
            sum = carry + data;
            ListNode *newnode = new ListNode(sum % 10);
            newnode -> next = dummy;
            dummy = newnode;
            carry = sum / 10;
            s1.pop();
        }
        while(!s2.empty()){
            int data = s2.top();
            sum = carry + data;
            ListNode *newnode = new ListNode(sum % 10);
            newnode -> next = dummy;
            dummy = newnode;
            carry = sum / 10;
            s2.pop();
        }
        if(carry != 0){
            ListNode *newnode = new ListNode(carry);
            newnode -> next = dummy;
            dummy = newnode;
        }
        return dummy;
    }
};