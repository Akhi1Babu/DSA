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
            //using slow and fast appraoch..
            ListNode * slow=head;
            ListNode * fast=head;
            for(int i=0;i<n;i++){
                fast=fast->next;
            }
            if(n==1 && head->next==nullptr){
                return NULL;
            }
            if(fast==NULL){
                return head->next;
                
            }
            
            while(fast->next!=nullptr){
                fast=fast->next;
                slow=slow->next;
            }
            
            
            ListNode * deletingnode=slow->next;
            slow->next=slow->next->next;
            deletingnode->next=nullptr;
            delete(deletingnode);
            
            return head;
        
    }
};