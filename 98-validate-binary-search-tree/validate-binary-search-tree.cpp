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
		bool checking(TreeNode* root,long long minimum,long long maximum){
			if(!root){
				return true;
			}
			if(root->val<=minimum || root->val>=maximum){
				return false;
			}
			return(checking(root->left,minimum,root->val) && checking(root->right,root->val,maximum));
		}
public:
    bool isValidBST(TreeNode* root) {
        long long  minimum=LLONG_MIN;
			long long maximum=LLONG_MAX;
			return checking(root,minimum,maximum);
    }
};