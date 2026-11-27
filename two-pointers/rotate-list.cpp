class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* t = head;
        int len = 0;
        while (t != NULL) {
            len++;
            t = t->next;
        }
        k = k % len;
        if (k == 0)
            return head;
        t = head;
        for (int i = 1; i < len - k; i++) {
            t = t->next;
        }
        ListNode* newHead = t->next;
        t->next = NULL;
        ListNode* t1 = newHead;
        while (t1->next != NULL) {
            t1 = t1->next;
        }
        t1->next = head;
        return newHead;
    }
};