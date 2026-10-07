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
        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // Step 2: Reverse the second half of the linked list
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (slow != nullptr) { // Fix: Loop through the last element
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        
        // Step 3: Compare both halves
        ListNode* left = head;
        ListNode* right = prev; // The reversed half now starts at 'prev'
        while (right != nullptr) { // Only need to check the length of the second half
            if (left->val != right->val) {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        
        return true;
    }
};
