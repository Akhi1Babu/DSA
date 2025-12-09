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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode * temp1= l1;
        ListNode * temp2=l2;
        ListNode * resulthead= new ListNode(0,nullptr);
        ListNode * resulttemp= resulthead;

        int carry=0;
        while(temp1!=NULL && temp2 !=NULL){
           

            int sum=0;
            int data=0;
           
            sum=temp1->val+temp2->val;
            data=(sum+carry)%10;
            carry=(sum+carry)/10;
             ListNode * newnode=new ListNode(data,nullptr);
             resulttemp->next=newnode;
             resulttemp=resulttemp->next;
             temp1=temp1->next;
             temp2=temp2->next;


            
        }
        while(temp1!=NULL){
            int data=(temp1->val+carry)%10;
            carry=(temp1->val+carry)/10;
            
            ListNode * newnode=new ListNode(data,nullptr);
            resulttemp->next=newnode;
             resulttemp=resulttemp->next;
             temp1=temp1->next;
            
        }
        while(temp2!=NULL){
              int data=(temp2->val+carry)%10;
            carry=(temp2->val+carry)/10;
            ListNode * newnode=new ListNode(data,nullptr);
            resulttemp->next=newnode;
             resulttemp=resulttemp->next;
             temp2=temp2->next;
        }
        if(carry>0){
            ListNode * newnode=new ListNode(carry,nullptr);
            resulttemp->next=newnode;
            resulttemp=resulttemp->next;
        }
        return resulthead->next;

    }
};