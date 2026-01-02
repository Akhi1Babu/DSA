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
private:
    bool checkingSymmetrical(TreeNode* tree1, TreeNode* tree2) {
        if (tree1 == NULL || tree2 == NULL) {
            return tree1 == tree2;
        }
        return ((tree1->val == tree2->val) &&
                checkingSymmetrical(tree1->left, tree2->right) &&
                checkingSymmetrical(tree1->right, tree2->left));
    }

public:
    bool isSymmetric(TreeNode* root) {
        // your code goes here
        TreeNode* tree1 = root;
        TreeNode* tree2 = root;
        return checkingSymmetrical(tree1, tree2);
    }
};