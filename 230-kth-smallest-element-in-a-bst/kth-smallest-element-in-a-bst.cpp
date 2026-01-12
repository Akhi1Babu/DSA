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
    void findingKthSmallest(TreeNode* node,int k,int & count,int & kthsmallest){
        if(!node){
            return;
        }
      
        if(node->left){
            findingKthSmallest(node->left,k,count,kthsmallest);
        }
        count++;
          if(count==k){
            kthsmallest=node->val;
            
        }
        if(node->right){
            findingKthSmallest(node->right,k,count,kthsmallest);
        }

    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int kthsmallest=0;
        findingKthSmallest(root,k,count,kthsmallest);
        return kthsmallest;
        
    }
};