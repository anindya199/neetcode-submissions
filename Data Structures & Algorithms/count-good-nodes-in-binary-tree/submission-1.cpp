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
void countingGoodNodes(TreeNode* root,int& cnt,int prev)
    {
        if(root == nullptr)return;
        //if the root->val greter than or equal to prev node value
        if(root->val>=prev)
        {
            cnt++;
            //sending the cuurent node value as prev node value
            countingGoodNodes(root->left,cnt,root->val);
            countingGoodNodes(root->right,cnt,root->val);
            return;
        }
        //if not greater than or equal to then send the prev node 
        countingGoodNodes(root->left,cnt,prev);
        countingGoodNodes(root->right,cnt,prev);
        return;
    }
    int goodNodes(TreeNode* root) {
        int cnt=1,prev=root->val;
        countingGoodNodes(root->left,cnt,prev);
        countingGoodNodes(root->right,cnt,prev);
        return cnt;
    }
};
