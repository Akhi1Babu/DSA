/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private: 
    void findSum(TreeNode * root,int &summation){
      if (!root) return;

        // check if left child exists and is a leaf
        if (root->left &&
            root->left->left == NULL &&
            root->left->right == NULL) {
            summation += root->left->val;
        }

        findSum(root->left, summation);
        findSum(root->right, summation);
    }
    bool isLeaf(TreeNode* node){
        if(node->left==NULL && node->right==NULL){
            return true;
        }
        else{
            return false;
        }
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int summation=0;
        if(isLeaf(root)){
            return 0;
        }
        findSum(root,summation);
        return summation;
        
    }
};