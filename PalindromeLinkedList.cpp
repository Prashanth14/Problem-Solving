// Given the head of a singly linked list, return true if it is a palindrome.

// Example 1:

// Input: head = [1,2,2,1]
// Output: true
// Example 2:


// Input: head = [1,2]
// Output: false
 

// Constraints:

// The number of nodes in the list is in the range [1, 105].
// 0 <= Node.val <= 9

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
    
    bool isPalindrome(ListNode* head) {
        vector<int> data;
        struct ListNode *temp = head;
        
        while(temp != NULL){
            data.push_back( temp -> val );
            temp = temp -> next;
        }
        
        int i = 0, j = data.size()-1;
        while(i <= j){
            if(data[i] != data[j]){
                return false;
            }else{
                i++;
                j--;
            }
                
        }
        return true;
    }
};