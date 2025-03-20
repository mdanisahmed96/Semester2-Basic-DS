#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    list<int>linklist;
    void push(int val)
    {
        linklist.push_back(val);
    }
    void pop()
    {
        linklist.pop_back();
    }
    int top()
    {
        return linklist.back();
    }
    int size ()
    {
        return linklist. size();
    }
    bool empty()
    {
        if(linklist.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
int  main()
{
   mystack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >>x;
       st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();

    }

 return 0;
}