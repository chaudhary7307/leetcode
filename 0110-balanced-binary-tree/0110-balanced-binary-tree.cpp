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
int height(TreeNode* root){
    if(root==NULL) return 1;
    int hleft=height(root->left);
    int hright=height(root->right);
    if(hleft == -1 || hright == -1 || abs(hleft-hright)>1)
    return -1;
    return 1+max(hleft,hright);
}
    bool isBalanced(TreeNode* root) {
        return (height(root)>0);
        
    }
};