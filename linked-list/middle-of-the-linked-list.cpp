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
    ListNode* middleNode(ListNode* head) {
        ListNode*p1=head;
        int count =0;
        ListNode *p2=head;
        while(p1->next!=NULL){
            count++;
            p1=p1->next;
        }
        int mid=count/2;
        for(int i=0;i<mid;i++){
            p2=p2->next;
        }
        if(count%2==0)
        {
            return p2;
        }
        return p2->next;

    }
};