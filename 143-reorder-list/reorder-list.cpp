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
    //going to solve it through
    //1->find the mid through heir and tortouis algo
    //2->reverse the second part...
    //3->alternating joining...
private:
    ListNode* findingMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* ReversingLL(ListNode* node){
        
        if(node->next==NULL){
            return node;

        }
        ListNode* newhead=ReversingLL(node->next);
        ListNode* front=node->next;
        front->next=node;
        node->next=NULL;
        return newhead;



    
    }
public:
    void reorderList(ListNode* head) {
        if( head==NULL || head->next==NULL ){
            return;
        }
        ListNode* mid=findingMid(head);

        ListNode* reversepoint=mid->next;
        mid->next=NULL;
        ListNode* second=ReversingLL(reversepoint);
        ListNode* first=head;
        while(second!=NULL){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        

        
    }
};