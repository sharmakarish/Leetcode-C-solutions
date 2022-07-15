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
//------------------------Recursive version----------------------------------------/
class Solution {
public:
   void inorderTraversalHelper(TreeNode* root, vector<int> &res) {
	if(root != NULL)
	{
		if(root -> left)
			inorderTraversalHelper(root -> left, res);

		res.push_back(root -> val);

		if(root -> right)
			inorderTraversalHelper(root -> right, res);
	}

	return;
}


vector<int> inorderTraversal(TreeNode* root) 
{   
	vector<int> res;
	inorderTraversalHelper(root, res) ;
	return res;
}
};