#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s;
    int n,t;  cin>>n;
    queue<int> q;
    while(n--){
        cin>>s;
        if(s == "PUSH"){
            cin>>t;
            q.push(t);
        }
        else if(s == "POP"){
            if(!q.empty())
                q.pop();
        }
        else if(s == "PRINTFRONT"){
            if(q.empty())
                cout<<"NONE"<<endl;
            else
                cout<<q.front()<<endl;
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
