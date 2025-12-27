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
    vector<vector<int>> levelOrder(TreeNode* root) {
      
        queue<TreeNode*> que;
        que.push(root);
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
      

        while (que.size() != 0) {
            int size = que.size();
              vector<int> list;
            for (int i = 0; i < size; i++) {
                TreeNode* node = que.front();
                que.pop();
                if (node->left != NULL) {
                    que.push(node->left);
                }
                if(node->right!=NULL){
                    que.push(node->right);
                }
                list.push_back(node->val);

            }
            result.push_back(list);
        }
        return result;
    }
};

