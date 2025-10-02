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
vector<int>tree;
    vector<int> inorderTraversal(TreeNode* root) { 
        if(root==nullptr) return {};
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()){
            TreeNode* node=st.top();
            if(node->left==nullptr){
                tree.push_back(node->val);
                st.pop();
                if(node->right!=nullptr){
                    st.push(node->right);
                    node->right=nullptr;
                }
            }
            else {
                st.push(node->left);
                node->left=nullptr;
            }

        }
        return tree;

    }
};