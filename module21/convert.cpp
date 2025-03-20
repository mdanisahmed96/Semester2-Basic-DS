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
node *convert(int a[],int n,int l,int r)
{
    if(l>r)
        return NULL;
    int mid =(l+r)/2;
    node *root= new node(a[mid]);
    node *leftroot=convert(a,n,l,mid-1);
    node *rightroot=convert(a,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
    return root;
}
void level_order(node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int  main()
{
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    node *root= convert(a,n,0,n-1);
    level_order(root);
 return 0;
}