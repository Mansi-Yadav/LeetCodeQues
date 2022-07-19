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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL)
            return preorder;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while(st.empty() == false){
            TreeNode* top= st.top();
            st.pop();
            
            preorder.push_back(top->val);
            
            if(top->right)
                st.push(top->right);
            if(top->left)
                st.push(top->left);
        }
        return preorder;
    }
};