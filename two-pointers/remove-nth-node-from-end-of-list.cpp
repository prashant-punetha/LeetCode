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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* p1=head;
        ListNode* P2=head;
        while(P2!=NULL){
            count++;
            P2=P2->next;
        }
        int pos=count-n;
        ListNode* p2=NULL;
        if(pos==0){
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
        for(int i=0;i<pos;i++){
            p2=p1;
            p1=p1->next;
        }
        p2->next=p1->next;
        delete p1;
        return head;
        
    }
};