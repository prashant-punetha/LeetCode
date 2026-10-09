class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      
        if (head == nullptr || head->next == nullptr) {
                    return nullptr;
        }
        ListNode *p1 = head;
        int count = 0;
        while (p1 != nullptr) {
            count++;
            p1 = p1->next;
        }
        int mid = count / 2;
        ListNode *p3 = head;
        
        for (int i = 0; i < mid - 1; i++) {
            p3 = p3->next;
        }
        
        
        ListNode *p2 = p3->next;
        p3->next = p2->next;
        delete p2;
        
        return head;
    }
};
