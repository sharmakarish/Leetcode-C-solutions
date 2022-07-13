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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        if(root == NULL){
            return result;
        }
        s.push(root);
        
        while(!s.empty()){
            curr = s.top();
            result.push_back(curr->val);
            s.pop();
            if(curr->right){
                s.push(curr->right);
            }
       if(curr->left){
                s.push(curr->left);
            }
        }
        return result;
    }
};