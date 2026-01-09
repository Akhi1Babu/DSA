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
public:
    int widthOfBinaryTree(TreeNode* root) {
            //using level order traversal..
            int maxwidth=INT_MIN;
            if(root==NULL){
                return 0;
            }
            queue<pair<TreeNode*,long long>> que;
            que.push({root,0});
            while(!que.empty()){
                int n=que.size();
                int mmin=que.front().second;
                 int minimumindex,maximumindex;
                for(int i=0;i<n;i++){
                    long long currindex=que.front().second-mmin;
                    TreeNode* node=que.front().first;
                   
                    if(node->left){
                        que.push({node->left,currindex*2+1});
                    }
                    if(node->right){
                        que.push({node->right,currindex*2+2});
                    }
                   
                    if(i==0){
                        minimumindex=que.front().second;
                    }
                    if(i==n-1){
                        maximumindex=que.front().second;
                    }
                     que.pop();
                    
                }
                maxwidth=max(maxwidth,maximumindex-minimumindex+1);
            }
            return maxwidth;
    }
};