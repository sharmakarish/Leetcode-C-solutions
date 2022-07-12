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
      vector<int> row;
        vector<vector<int>> result;
        queue<TreeNode*> q;
       if(root==NULL){
          return result; //returning result as it is initially NULL
       }
        q.push(root);
       
     
         while(!q.empty()){
             
             int size=q.size();
            for(int i=0;i<size;i++)
            {
            TreeNode* temp = q.front();
            q.pop();
             
            row.push_back(temp->val);
        //    cout<<temp->val<<" ";//esa krne se ye value kahi store nhi hui bas print krke pop krdi
           
             
             if(temp->left){ 
            q.push(temp->left);
                }
             if(temp->right){ 
            q.push(temp->right);
                }
        
        }
       //  reverse(row.begin() , row.end());
         result.push_back(row);
            row.clear();       
    }
         
        return result;  
    }
    
      vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans = levelOrder(root);
       reverse(ans.begin(), ans.end());
        return ans;
    }
};