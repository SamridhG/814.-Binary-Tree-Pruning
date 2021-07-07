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
    int check(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else if(root->val==1)
        {
            return 1;
        }
        return (check(root->left) || check(root->right));
    }
    TreeNode *verify(TreeNode *root)
    {
        if(root==NULL)
        {
            return NULL;
        }
        else
        {
            int i=check(root->left);
            int j=check(root->right);
            if(i==0)
            {
                root->left=NULL;
            }
            else
            {
                root->left=verify(root->left);
            }
             if(j==0)
            {
                root->right=NULL;
            }
            else
            {
                root->right=verify(root->right);
            }
        }
        return root;
    }
    TreeNode* pruneTree(TreeNode* root) {
        root=verify(root);
        if(root->val==0 && root->left==NULL && root->right==NULL)
        {
            return 0;
        }
        else
        {
            return root;
        }
    }
};
