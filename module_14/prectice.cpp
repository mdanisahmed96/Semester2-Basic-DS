#include<bits/stdc++.h>
using namespace std;

int  main()
{
    queue<int>queue1,queue2,margedqueue;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        queue1.push(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        queue2.push(x);
    }
    while(!queue1.empty())
    {
        margedqueue.push(queue1.front());
        queue1.pop();
    }
    while(!queue2.empty())
    {
        margedqueue.push(queue2.front());
        queue2.pop();
    }
    while(!margedqueue.empty())
    {
        cout<<margedqueue.front()<<" ";
        margedqueue.pop();
    }



 return 0;
}