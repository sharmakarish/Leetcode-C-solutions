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
//------------------------iterative version----------------------------------------/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s; 
        vector<int> result;
      if(root == NULL){
            return result ;
        }
            TreeNode* node = root;
        while(node != NULL || !s.empty() ){
          
           if(node != NULL){
                s.push(node);
                node = node->left;
            }
            else{
                if(s.empty()){
                    break;
                }
            node = s.top();
            result.push_back(node->val);
            s.pop();
            
            node = node->right;
            }
        }
       return result;
        
    }
};