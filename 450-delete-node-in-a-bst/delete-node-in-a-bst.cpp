/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* helper(TreeNode* node){
        if(node->left==NULL){
            return node->right;
        }
        else if(node->right==NULL){
            return node->left;
        }
        else{
            TreeNode* rightchild=node->right;
            TreeNode* rightmostnode=findingrightmost(node->left);
            rightmostnode->right=rightchild;
            return node->left;
           
        }
         return node->left;
    }
    TreeNode* findingrightmost(TreeNode* node){
        if(node->right==NULL){
            return node;
        }
       return findingrightmost(node->right);
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        // here we are solving this question by attaching the deletingnode's
        // right  to the rightmost of the deleting node's left
        TreeNode* realhead = root;
        if(!root){
            return NULL;

        }
        if(root->val==key){
            return helper(root);
        }
        while (root) {
            

            if (root->val > key) {
                if (root->left != NULL && root->left->val == key) {
                    root->left = helper(root->left);
                    break;
                } else if (root->val > key) {
                    root = root->left;
                }
            }
            else if(root->val<key){
                if(root->right!=NULL && root->right->val==key){
                    root->right=helper(root->right);
                    break;
                }
                else if(root->val<key){
                    root=root->right;
                }
            }
        }
        return realhead;
    }
};