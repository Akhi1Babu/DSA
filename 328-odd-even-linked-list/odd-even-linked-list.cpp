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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode * oddhead=head;
        ListNode * oddtemp=head;

        ListNode * evenhead=head->next;
        ListNode * eventemp=head->next;
        while(eventemp!=NULL  && eventemp->next!=NULL){
            oddtemp->next=oddtemp->next->next;
            oddtemp=oddtemp->next;
            eventemp->next=eventemp->next->next;
            eventemp=eventemp->next;
        }
        oddtemp->next=evenhead;
        return oddhead;
        
        
    }
};