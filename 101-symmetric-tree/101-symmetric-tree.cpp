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
    bool solve(TreeNode* left, TreeNode* right){
        if(left == NULL || right== NULL)
            return left == right;
        
        if(left->val != right->val)
            return false;
        
        int op1= solve(left->left, right->right);
        int op2= solve(left->right, right->left);
        if(op1 && op2)
            return true;
        else
            return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        
        bool ans= solve(root->left, root->right);
        return ans;
    }
};