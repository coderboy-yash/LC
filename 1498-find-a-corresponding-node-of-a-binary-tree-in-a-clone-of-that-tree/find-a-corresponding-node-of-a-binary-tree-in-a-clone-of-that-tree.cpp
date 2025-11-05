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
    TreeNode* res;
    void solve(TreeNode* node1,TreeNode* node2,TreeNode* target){
         if(!node1)return;
         if(node1->val==target->val){
            res=node2;
         }
         solve(node1->left,node2->left,target);
         solve(node1->right,node2->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(original,cloned,target);
        return res;
    }
};