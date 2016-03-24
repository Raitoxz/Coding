/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

class Solution1 {
public:
    //preorder
    vector<vector<int>> ret;

    void buildVector(TreeNode *root, int depth)
    {
        if(root == NULL) return;
        if(ret.size() == depth)
            ret.push_back(vector<int>());

        ret[depth].push_back(root->val);
        buildVector(root->left, depth + 1);
        buildVector(root->right, depth + 1);
    }

    vector<vector<int> > levelOrder(TreeNode *root) {
        buildVector(root, 0);
        return ret;
    }
};

class Solution2 {
public:
    //level order
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> >  result;
        if (!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);//这个NULL总是插在每一层的结束位置
        vector<int> cur_vec;
        while(!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            if (t==NULL) {
                result.push_back(cur_vec);
                cur_vec.resize(0);
                if (q.size() > 0) {
                    q.push(NULL);
                }
            } else {
                cur_vec.push_back(t->val);
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
        }
        return result;
    }
};
