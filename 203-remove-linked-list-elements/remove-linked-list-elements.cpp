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
        if(head==NULL){
            return NULL;
        }
        while(head->val==val){
            ListNode * temp=head;
            head=head->next;
            temp->next=NULL;
            delete(temp);
             if(head==NULL){
            return NULL;
        }
            
            
            
        }
       
        ListNode * temp=head;
        ListNode * prev=head;
        
        while(temp!=NULL){
            if(temp->val==val){
                ListNode * nodetobedeleted=temp;
                temp=temp->next;
                prev->next=temp;
                delete(nodetobedeleted);

            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
        
    }
};