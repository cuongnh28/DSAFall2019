#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    int n,t;  cin>>n;
    deque<int> q;
    while(n--){
        cin>>s;
        if(s == "PUSHFRONT"){
            cin>>t;
            q.push_front(t);
        }
        else if(s == "PRINTFRONT"){
            if(q.empty())
                cout<<"NONE"<<endl;
            else
                cout<<q.front()<<endl;
        }
        else if(s == "POPFRONT"){
            if(!q.empty())
                q.pop_front();
        }
        else if(s == "PUSHBACK"){
            cin>>t;
            q.push_back(t);
        }
        else if(s == "PRINTBACK"){
            if(q.empty())
                cout<<"NONE"<<endl;
            else
                cout<<q.back()<<endl;
        }
        else if(s == "POPBACK"){
            if(!q.empty())
                q.pop_back();
        }
    }
}
int main()
{
    int t=1; //cin>>t;
    while(t--)
    {
        Solve();
    }
}
