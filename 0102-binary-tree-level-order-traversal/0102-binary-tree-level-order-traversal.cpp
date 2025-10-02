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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr) return{};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>tree;
        while(q.size()){
            int sz=q.size();
            tree.emplace_back();
            while(sz--){
                tree.back().push_back(q.front()->val);
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=nullptr)
                    q.push(node->left);
                    
                if(node->right!=nullptr)
                    q.push(node->right);

            }
            


        }
        return tree;
    }
};