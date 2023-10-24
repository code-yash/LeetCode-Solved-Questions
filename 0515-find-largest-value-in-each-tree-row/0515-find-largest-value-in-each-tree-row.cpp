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
    vector<int> largestValues(TreeNode* root) {

        if(root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        int maxv = INT_MIN;

        while(!q.empty()){
            int s = q.size();
            maxv = INT_MIN;

            while(s--){
                TreeNode* ele = q.front();
                q.pop();
                
                maxv = max(maxv, ele->val);

                if(ele->left != NULL)
                    q.push(ele->left);
                if(ele->right != NULL)
                    q.push(ele->right);
            }
            ans.push_back(maxv);
        }
        return ans;
        
    }
};