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

    bool isValid(TreeNode* root, long lb, long ub){
        if(root == NULL)
            return true;
        bool left, right;

        if(root->val > lb && root->val < ub){
            left = isValid(root->left, lb, root->val);
            if(left){
                right = isValid(root->right, root->val, ub);
            }
            return left & right;
        }
    return false;

    }


    
    bool isValidBST(TreeNode* root) {
        long ub = (long)INT_MAX + 1;
        long lb = (long)INT_MIN - 1;
        return isValid(root, lb, ub);

    }
};