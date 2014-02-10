#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

void printTree(TreeNode *root){
	if (root==NULL) {cout<<"#"<<" ";
	return;
}   
    cout<<root->val<<" ";
	printTree(root->left);
	
	printTree(root->right);
}