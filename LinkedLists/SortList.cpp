// Given the head of a linked list, return the list after sorting it in ascending order.

// Example 1:


// Input: head = [4,2,1,3]
// Output: [1,2,3,4]
// Example 2:


// Input: head = [-1,5,3,4,0]
// Output: [-1,0,3,4,5]
// Example 3:

// Input: head = []
// Output: []
 

// Constraints:

// The number of nodes in the list is in the range [0, 5 * 104].
// -105 <= Node.val <= 105


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
    ListNode* sortList(ListNode* head) {
        if(!head || !head -> next)
            return head;
        
        struct ListNode *temp1 = head, *temp2 = head;
        vector<int> arr;
        while(temp1){
            arr.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
        
        sort( arr.begin(), arr.end() );
        
        int n = arr.size();
        for(int i = 0; i < n; ++i){
            temp2 -> val = arr[i];
            temp2 = temp2 -> next;
        }
        
        return head;
    }
};