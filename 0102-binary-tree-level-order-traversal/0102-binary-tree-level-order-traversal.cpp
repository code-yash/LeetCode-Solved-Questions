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
    
        queue<TreeNode*> q;
        vector<vector<int>> ans;

        if(root == NULL)
            return ans;

        q.push(root);
        int levelcnt = 1;
        int currcnt = 0;

        vector<int> currlevel;

        while(!q.empty()){
            TreeNode* ele = q.front();
            q.pop();

            levelcnt--;
            currlevel.push_back(ele->val);

            if(ele->left != NULL)
                {q.push(ele->left); currcnt++;}
            if(ele->right != NULL)
                {q.push(ele->right); currcnt++;}

            if(levelcnt == 0)
            {
                ans.push_back(currlevel);
                currlevel.clear();
                levelcnt = currcnt;
                currcnt = 0;
            }
        }
        return ans;
    }
};