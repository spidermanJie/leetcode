/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > ret;
        if(root==NULL)return ret;
        vector<int> path;
        path.push_back(root->val);
        dfs(root,sum-root->val,path,ret);
        return ret;
        

    }
    
    void dfs(TreeNode* root, int sum, vector<int> &path, vector<vector<int> > &ret ){
         if(root->left==NULL && root->right==NULL && sum==0){
             ret.push_back(path);
             return;
         }
         if(root->left){
             path.push_back(root->left->val);
             dfs(root->left,sum-root->left->val,path,ret);
             path.pop_back();
         }
         if(root->right){
             path.push_back(root->right->val);
             dfs(root->right,sum-root->right->val,path,ret);
             path.pop_back();
         }
    }
    
};