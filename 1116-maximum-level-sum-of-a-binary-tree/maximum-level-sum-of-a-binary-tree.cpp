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
    int maxLevelSum(TreeNode* root) {
      queue<TreeNode*> q;
      q.push(root);
      long long mx=LLONG_MIN;
      int ans=1,level=1;
      while(!q.empty()){
        int n=q.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            TreeNode* curr=q.front();
            q.pop();
            sum+=curr->val;
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        if(sum>mx) mx=sum,ans=level;
        level++;
      }
      return ans;
    }
};