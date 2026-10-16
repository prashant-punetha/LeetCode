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
    ListNode* removeElements(ListNode* head, int val) {
       
        
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* p1 = head;
        while (p1!= NULL && p1->next != NULL) {
            if (p1->next->val == val) {
              ListNode *to_delete = p1->next;
                p1->next=to_delete->next;
                delete(to_delete);
            } else {
                p1 = p1->next;
            }
        }

        
        return head;
    }
};