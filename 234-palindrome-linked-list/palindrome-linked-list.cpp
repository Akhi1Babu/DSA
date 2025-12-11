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
private:
    ListNode *reversedLinkedList(ListNode * head){
         if(head->next==nullptr){
            return head;
        }
        ListNode* newhead=reversedLinkedList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=nullptr;
        return newhead;

    }
public:
    bool isPalindrome(ListNode* head) {
       

    
        //find the middle..
        ListNode * fast=head;
        ListNode * slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        // we get middle as the "slow"
        ListNode * reversednodehead=reversedLinkedList(slow);
        ListNode * temp1=head;
        ListNode * temp2=reversednodehead;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;


        }
        return true;

    }
};