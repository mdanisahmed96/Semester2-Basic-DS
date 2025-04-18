#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
       node* f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)
            q.push(f->left);
        if(f->right)
             q.push(f->right);

    }
}
int  main()
{
    node *root = new node(10) ;
    node *a = new node(20) ;
    node *b = new node(30) ;
    node *c = new node(40) ;
    node *d = new node(50) ;
    node *e = new node(60) ;
    node *f = new node(70) ;
    node *g = new node(80) ;
    node *h = new node(90) ;
    node *i = new node(100) ;
    
    
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    b->right=d;
    d->left=f;
    d->right=g;
    h->right=i;
    levelorder(root);
    return 0;
}