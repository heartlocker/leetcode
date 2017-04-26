#include <iostream>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  void dfs(TreeNode*root, bool f, int &s) {
     if(!root) return;
     if(!root->left && !root->right) {
         if(f) s += root->val;
           return;
        }
        if(root->left) {
           dfs(root->left, 1, s);
       }
       if(root->right) {
         dfs(root->right, 0, s);
       }

   }
 int sumOfLeftLeaves(TreeNode* root) {
   int res = 0;
        dfs(root, 0, res);
       return res;

  }

  int main(int argc, char const *argv[]) {
    TreeNode root(3),a(9),b(20),c(15),d(7);
    root.right=&b;
    root.left=&a;
    a.left=&c;
    a.right=&d;
    TreeNode *p=&root;
    cout<<"result:"<<sumOfLeftLeaves(p)<<endl;

    return 0;
  }
