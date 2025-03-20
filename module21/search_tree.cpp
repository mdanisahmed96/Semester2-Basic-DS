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
node *input_tree()
{
    int val;
    cin>>val;
    node *root;
    if(val==-1)
    {
        root=NULL;
    }
    else
        root = new node(val);
        queue<node*>q;
        if(root)
            q.push(root);
        while(!q.empty())
        {
            node *p=q.front();
            q.pop();
            int l,r;
            cin>>l>>r;
            node *myleft;
            node *myright;

         if(l==-1)
            myleft=NULL;

         else
           myleft=new node(l);
            
         if(l==-1)
            myright=NULL;

         else
           myright=new node(r);

         p->left=myleft;
         p->right=myright;
         if(p->left)
            q.push(p->left);
         else if(p->right)
            q.push(p->right);
        }

        return root;
}
void levelorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        node *f=q.front();
        q.pop();
       
        cout<<f->val<<" ";
        if(f->left)
          q.push(f->left);
        if(f->right)
           q.push(f->right);
    }
}
bool search(node *root,int x)
{
    if(root ==NULL)
        return false;
    else if(root->val == x)
        return true;

    else if( x < root->val)  
        return search(root->left,x);
    else  
        return search(root->right,x);
        

}
int  main()
{
    node *root= input_tree();
    // levelorder(root);
    if(search(root,100))
        {
            cout<<"YES"<<endl;

        }
    else
    {
        cout<<"NO"<<endl;
    }
return 0;
}