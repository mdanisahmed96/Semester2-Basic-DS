#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node *head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(node *tail)
{
    node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int size(node *head)
{
    node *tmp=head;
    int count =0;
    while(tmp!=NULL)
    {
        count ++;
        tmp=tmp->next;
    }
    return count;
}
void inserttail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;

    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
int compare(node* head1, node* head2) {
    node* tmp1 = head1;
    node* tmp2 = head2;
    
    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) {
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    return (tmp1 == NULL && tmp2 == NULL) ;
}


int  main()
{

    node* head1= NULL;
    node* tail1= NULL;
    node* head2= NULL;
    node* tail2= NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
    inserttail(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
    inserttail(head2,tail2,val);
    }
    if (compare(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
 return 0;
}
