#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,t,tmp;  cin>>n;
    queue<int> q;
    while(n--){
        cin>>t;
        switch(t){
            case 1:
            {
                cout<<q.size()<<endl;
                break;
            }
            case 2:
            {
                if(q.empty())
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
                break;
            }
            case 3:
            {
                cin>>tmp;
                q.push(tmp);
                break;
            }
            case 4:
            {
                if(!q.empty())
                    q.pop();
                break;
            }
            case 5:
            {
                if(q.empty())
                    cout<<-1<<endl;
                else
                    cout<<q.front()<<endl;
                break;
            }
            case 6:
            {
                if(q.empty())
                    cout<<-1<<endl;
                else
                    cout<<q.back()<<endl;
                break;
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}
