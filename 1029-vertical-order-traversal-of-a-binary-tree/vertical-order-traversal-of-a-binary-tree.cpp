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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // doing level order Traversal..
        map<int,map<int,multiset<int>>> nodes; // Data structure to store..
        queue<pair<TreeNode*,pair<int,int>>> todo; //queue for level order Traversal
        //Doing Level Order Traversal
        todo.push({root,{0,0}});
        while(!todo.empty()){
            auto temp=todo.front();
            todo.pop();
            int h=temp.second.first;// horizontal index or vertical index number
            int v=temp.second.second;// level number or vertical index
            // inserting data into the Data Structure node
            nodes[h][v].insert(temp.first->val);
            if(temp.first->left){
                todo.push({temp.first->left,{h-1,v+1}});
            }
            if(temp.first->right){
                todo.push({temp.first->right,{h+1,v+1}});
            }


        }
        vector<vector<int>> result;
        for(auto p:nodes){
            vector<int> list;
            for(auto q: p.second){
                list.insert(list.end(),q.second.begin(),q.second.end());
            }
            result.push_back(list);
        }
        return result;
        
    }
};