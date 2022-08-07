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
    bool validBST(TreeNode* root, long min, long max){

    if(root == NULL)
        return true;
        
    if(root->val >= max || root->val <=min)
        return false;
        
    bool op1= validBST(root->left, min, root->val);
    bool op2= validBST(root->right, root->val, max);
    return op1&&op2;
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;
        long min= LONG_MIN;
        long max=LONG_MAX;
        return validBST(root, min, max );
    }
};