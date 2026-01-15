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
    TreeNode* constructingBst(vector<int> & preorder,int &index,int bound,TreeNode* &realroot){
        if(index>=preorder.size() || preorder[index]>bound){
            return NULL;
        }
        
        TreeNode* newnode=new TreeNode(preorder[index]);
        if(index==0){
            realroot=newnode;
        }
        index++;
        newnode->left=constructingBst(preorder,index,newnode->val,realroot);
        newnode->right=constructingBst(preorder,index,bound,realroot);
        return newnode;

        

    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        int bound=INT_MAX;
        TreeNode* realroot;

       constructingBst(preorder,index,bound,realroot);
       return realroot;

        
        
    }
};