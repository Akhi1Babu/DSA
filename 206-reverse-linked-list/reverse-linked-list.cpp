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
    ListNode *reverseLinkedList(ListNode* head,ListNode * temp){
        if(temp->next==nullptr){
            return temp;
        }
        ListNode* newhead=reverseLinkedList(head,temp->next);
        ListNode* front=temp->next;
        front->next=temp;
        temp->next=nullptr;
        return newhead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        // we can solve it by recursion...
        if( head==NULL || head->next==NULL){
            return head;
        }
        ListNode * temp=head;
        return reverseLinkedList(head,temp);
    }
};