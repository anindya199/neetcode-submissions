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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        else if((p == nullptr && q !=nullptr) || (p != nullptr && q ==nullptr))
            return false;
        if(p->val != q->val)return false;

        if(!isSameTree(p->left,q->left))return false;
        if(!isSameTree(p->right,q->right))return false;
        return true;
    }
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr)return true;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node->val == subRoot->val)
            {
                if(isSameTree(node,subRoot) == true)return true;
            }
            //no else because suppose the value same but if the that is not a subtree node 
            //like root =[1,1], subRoot = [1]; then after matching also we need to again check
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right); 
            
        }
        return false;
    }
};
