#include <vector>
#include <iostream>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };



 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> p_path,q_path;
    TreeNode* temp=root;
     TreeNode* result=root;
        while (temp!=p)
        {
            if(p->val<temp->val&&temp)
            {
                p_path.push_back(temp);
                temp=temp->left;

            }
            else if(p->val>temp->val)
            {

                p_path.push_back(temp);
                temp=temp->right;
            }

        }
        p_path.push_back(temp);
        temp=root;
         while (temp!=q)
        {
            if(q->val<temp->val)
            {

                q_path.push_back(temp);
                temp=temp->left;

            }
            else if (q->val>temp->val)
            {

                q_path.push_back(temp);
                temp=temp->right;
            }

        }
        q_path.push_back(temp);
        int size=(p_path.size()<q_path.size())?p_path.size():q_path.size();
for(int i=0;i<p_path.size();i++)
    {
TreeNode *x=p_path[i];
cout<<x->val<<" ";

    }
    cout<<endl<<endl;
    for(int i=0;i<q_path.size();i++)
        {
    TreeNode *x=q_path[i];
    cout<<x->val<<" ";

        }

        for(int i=0;i<size;i++)
        {
            if(p_path[i]==q_path[i])
              {
                cout << p_path[i]<<" "<<&p_path[i]<<endl;
                cout << q_path[i] <<" "<<&q_path[i]<<endl;
cout<<"time:"<<i<<" "<<endl;
                result=p_path[i];

              }
              else
              {
                break;
              }
        }

        return result;
    }
    int main(){
      TreeNode a(3),b(1),c(4),d(2);
      //,e(4),f(7),g(9),h(3),i(5);
      a.left=&b;
      a.right=&c;
    //  b.left=&d;
      b.right=&d;
      // e.left=&h;
      // e.right=&i;
      // c.left=&f;
      // c.right=&g;

TreeNode *root=&a,*p=&d,*q=&a;
TreeNode *result=lowestCommonAncestor(root,p,q);
cout<<"result:"<<result->val<<endl;

    }
