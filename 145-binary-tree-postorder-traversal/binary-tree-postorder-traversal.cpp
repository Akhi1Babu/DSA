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
    void generatePostorderTraversal(TreeNode *node,vector<int> & result){
        if(node==NULL){
            return;
        }
        generatePostorderTraversal(node->left,result);
        generatePostorderTraversal(node->right,result);
        result.push_back(node->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        generatePostorderTraversal(root,result);
        return result;
    }
};