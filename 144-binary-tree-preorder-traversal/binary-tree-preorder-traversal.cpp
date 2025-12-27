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
    void generatePreorderTraversal(TreeNode * node,vector<int> & result){
        if(node==NULL){
            return;
        }
        result.push_back(node->val);
        generatePreorderTraversal(node->left,result);
        generatePreorderTraversal(node->right,result);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        generatePreorderTraversal(root,result);
        return result;
        
    }
};