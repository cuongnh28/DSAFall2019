#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    string s;
    cin>>t;
    deque<int> dq;
    while(t--)
    {
        cin>>s;
        if(s=="PUSHFRONT")
        {
            cin>>a;
            dq.push_front(a);
        }
        else if(s=="PRINTFRONT")
        {
            if(dq.empty())
                cout<<"NONE"<<endl;
            else
                cout<<dq.front()<<endl;
        }
        else if(s=="POPFRONT")
        {
            if(!dq.empty())
                dq.pop_front();
        }
        else if(s=="PUSHBACK")
        {
            cin>>a;
            dq.push_back(a);
        }
        else if(s=="PRINTBACK")
        {
            if(dq.empty())
                cout<<"NONE"<<endl;
            else
                cout<<dq.back()<<endl;
        }
        else if(s=="POPBACK")
        {
            if(!dq.empty())
                dq.pop_back();
        }
    }
}
