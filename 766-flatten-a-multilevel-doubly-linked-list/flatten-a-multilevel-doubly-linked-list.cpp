/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
private:
    void generating(Node * node,vector<int> &result){
        result.push_back(node->val);

        if(node->child){
            generating(node->child,result);
        }
        if(node->next){
            generating(node->next,result);
        }
        else{
            return;
        }
    }

public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return NULL;
        }
        vector<int> result;
        generating(head,result);
        Node* resulthead=new Node(1,nullptr,nullptr,nullptr);
        Node* resulttemp=resulthead;
        Node* resultprev=resulthead;
        for(int i=0;i<result.size();i++){
            Node* newnode=new Node(result[i],nullptr,nullptr,nullptr);
            resultprev=resulttemp;
            newnode->prev=resultprev;
            resulttemp->next=newnode;
            resulttemp=resulttemp->next;

        }
        Node* head2=resulthead->next;  // done this to make it as a valid double linked list..[first node's prev should be null]
        head2->prev=nullptr;
        return head2;  
        
    }
};