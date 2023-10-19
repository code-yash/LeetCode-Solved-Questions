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
private:
    pair<int, int> findDiameter(TreeNode* root){
        if(root == NULL)
            return {0, 0};

        pair<int, int> l = findDiameter(root->left);
        pair<int, int> r = findDiameter(root->right);

        int ldepth = l.first;
        int rdepth = r.first;

        int diameter = ldepth + rdepth;

        int maxdia = max(diameter, max(l.second, r.second));

        return { 1 + max(l.first, r.first), maxdia};
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {

        pair<int , int> d = findDiameter(root);
        return d.second;
        
    }
};