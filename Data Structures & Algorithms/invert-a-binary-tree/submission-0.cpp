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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        queue<TreeNode*>q;

        q.push(root);
        while(!q.empty())
        {
            int qsize=q.size();
            for(int i=1;i<=qsize;i++)
            {
                TreeNode* node = q.front();
                TreeNode* temp=nullptr;
                q.pop();
                if(node->left){
                    temp=node->left;
                    q.push(node->left);
                }
                else
                {
                    temp=node->left;
                }
                if(node->right){
                    q.push(node->right);
                    node->left = node->right;
                    node->right = temp;
                }
                else
                {
                    node->left = node->right;
                    node->right = temp;
                }
            }
        }
        return root;
    }
};
