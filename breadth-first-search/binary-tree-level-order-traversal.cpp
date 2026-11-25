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
        vector<vector<int>> res;
        if(root==NULL){return res;}
            queue<TreeNode*> que;
            que.push(root);
        
        while(!que.empty()){
            int s=que.size();
            vector<int> cur;
            for(int i=0;i<s;i++){
                TreeNode *cn=que.front();
                que.pop();
                if(cn->left){que.push(cn->left);}
                if(cn->right){ que.push(cn->right);}
                cur.push_back(cn->val);
        }res.push_back(cur);}
        return res;

    }
};