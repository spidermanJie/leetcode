bool hasPathSum(TreeNode *root, int sum) {
        
       if(root == NULL && sum!=0)return false;
       if(root == NULL && sum==0)return false;
       if(root->left==NULL && root->right==NULL && sum==root->val)return true;
       if(root->left==NULL && root->right==NULL && sum!=root->val)return false;
       if(root->left!=NULL && root->right==NULL)return hasPathSum(root->left,sum-root->val);
       if(root->left==NULL && root->right!=NULL)return hasPathSum(root->right,sum-root->val);
       if(hasPathSum(root->left, sum-root->val))return true;
       if(hasPathSum(root->right,sum-root->val))return true;
       return false;
    }