#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class node
{
public:
node*  right;
node* left;
int value;
node(int key)
{
    value=key;
    right=NULL;
    left=NULL;
}
};

void zigzagtraversal(node* root)
{
  vector<node*>x;
  int flag=0;
  stack<node*>s;
  s.push(root);
  while(1)
 { 
  while(!s.empty())
  {
  x.push_back(s.top());
  s.pop();
  }
  if(x.size()==0)
  {
    break;
  }
  if(flag==0)
  {
  for(int i=0;i<x.size();i++)
  {
    cout<<x[i]->value<<" ";
    if(x[i]->left!=NULL)
    s.push(x[i]->left);
    if(x[i]->right!=NULL)
    s.push(x[i]->right);
  }
  x.clear();

  }
  if(flag==1)
  {
     for(int i=x.size()-1;i>=0;i--)
  {
    cout<<x[i]->value<<" ";
     if(x[i]->right!=NULL)
    s.push(x[i]->right);
     if(x[i]->left!=NULL)
    s.push(x[i]->left);
    
  }
  x.clear();
  }
  flag=0;
  }
}
//   while(!s.empty())
//   {
//     if(flag==1)
//    {
//     while(!s.empty())
//     {
//         cout<<s.front()->value<<" ";
//         if(s.front()->left!=NULL)
//         x.push_back(s.front()->left);
//         if(s.front()->right!=NULL)
//         x.push_back(s.front()->right);
//         s.pop();
//     }
//    }
//    if(flag==0)
//    {
    
//    }
//     // node* temp = s.pop();
//    flag=0;
    
//   }
// }

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(7);
    root->left->right=new node(8);
    root->right->left=new node(5);
    root->right->right=new node(4);
    root->left->left->left=new node(100);
    root->right->right->right=new node(112);
    zigzagtraversal(root);
    return 0;
}