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
public:
    vector<int> rightSideView(TreeNode* root) {
        //your code goes here
         vector<int> result;
         if(root==NULL){
            return result;
         }
         map<int,int> mpp;
        queue<pair<TreeNode*,int>> que;
        //doing level order Traversal...
        que.push({root,0});
        while(!que.empty()){
            auto node=que.front();
            que.pop();
            int levelnum=node.second;
            if(mpp.find(levelnum)==mpp.end()){
                mpp[levelnum]=node.first->val;
            }
             if(node.first->right){
                que.push({node.first->right,levelnum+1});
            }
            if(node.first->left){
                que.push({node.first->left,levelnum+1});
            }
           

        }
       
        for(auto it :mpp){
            result.push_back(it.second);
        }
        return result;
    }
};