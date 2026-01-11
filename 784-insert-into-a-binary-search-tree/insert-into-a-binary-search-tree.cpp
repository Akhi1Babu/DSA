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
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = root;
        if(root==NULL){
            TreeNode* newnode=new TreeNode(val);
            root=newnode;
        }
        while (node) {
            if (node->val <= val) {
                if (node->right != NULL) {
                    node = node->right;
                } else {
                  node->right = new TreeNode(val);
                  return root;
                    
                }
            }
            else if (node->val > val) {
                if (node->left != NULL) {
                    node = node->left;
                } else {
                    node->left = new TreeNode(val);
                    return root;
                }
            }
        }
        return root;
    }
};