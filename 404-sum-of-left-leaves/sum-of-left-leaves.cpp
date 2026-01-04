class Solution {
private:
    void findSum(TreeNode* root, int& summation) {
        if(!root){
            return;
        }
        if (isLeaf(root)) {
            summation = summation + root->val;
            return;
        }
        findSum(root->left, summation);
        if (!isLeaf(root->right)) {
            findSum(root->right, summation);
        }
    }
    bool isLeaf(TreeNode* node) {
        if (node==NULL ||node->left == NULL && node->right == NULL) {
            return true;
        } else {
            return false;
        }
    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        int summation = 0;
        if (isLeaf(root)) {
            return 0;
        }
        findSum(root, summation);
        return summation;
    }
};