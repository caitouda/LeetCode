/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    stack<TreeNode*> s;
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
        {
            return res;
        }
        search(root);
        return res;
    }
    
    void search(TreeNode* t)
    {
        s.push(t);
        while (true)
        {
            TreeNode* cur = s.top();
            s.pop();
            res.push_back(cur->val);
            if (cur->right)
                s.push(cur->right);
            if (cur->left)
                s.push(cur->left);
            if (s.empty())
                return;
        }
    }
};