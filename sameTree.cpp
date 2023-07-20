
#include <iostream>
#include <cstring>
#include <stdio.h>

using std::cout;
using std::endl;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  bool isSameTree(TreeNode *p, TreeNode *q)
  {
    
    // if (p == NULL && p == NULL) {
    //   return true;
    // }

    // if (!p == NULL != !q == NULL)
    // {
    //   return false;
    // }

    // if (!p->val == NULL != !q->val == NULL)
    // {
    //   return false;
    // }

    // if (p->val != q->val)
    // {
    //   return false;
    // }

    // if (p->right && q->right)
    // {

    //   isSameTree(p->right, q->right);
    //   if (p->right->val != q->right->val)
    //   {
    //     return false;
    //   }
    // }

    // if (!p->right != !q->right)
    // {
    //   return false;
    // }

    // if (!p->left != !q->left)
    // {
    //   return false;
    // }

    // if (p->left && p->left)
    // {
    //    isSameTree(p->left, q->left);
    //   if (p->left->val != q->left->val)
    //   {
    //     return false;
    //   }
    // }

    return true;
  }
};

int main()
{
  // int number = 7;
  // int * numberPtr = &number;
  TreeNode *t = new TreeNode(3, nullptr, nullptr);
  TreeNode *r = new TreeNode(2, t, nullptr);
  TreeNode *p = new TreeNode(2, nullptr, t);
  TreeNode *q = new TreeNode(2, nullptr, t);

  Solution instancia = Solution();

  cout << instancia.isSameTree(q, p);
}