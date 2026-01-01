/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
private:
    int findingDiameter(TreeNode * node,int &result){

        if(node==NULL){
            return 0;
        }
        int left=findingDiameter(node->left,result);
        int right=findingDiameter(node->right,result);
        result=max(result,left+right+1);
        return 1+max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        //your code goes 
        int result=0;
       int temp= findingDiameter(root,result);
       return result-1;
        
    }
};