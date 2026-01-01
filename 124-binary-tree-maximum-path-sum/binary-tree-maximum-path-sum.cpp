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
    int findingMaximumPathSum(TreeNode* node,int &maximum){
            if(node==NULL){
                return 0;
            }
            int left=findingMaximumPathSum(node->left,maximum);
            if(left<0){
                left=0;
            }
            int right=findingMaximumPathSum(node->right,maximum);
            if(right<0){
                right=0;
            }
           
            maximum=max(maximum,node->val+(left+right));
         
            return node->val+max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maximum=INT_MIN;

        findingMaximumPathSum(root,maximum);
        return maximum;

        
    }
};