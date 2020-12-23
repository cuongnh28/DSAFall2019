#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Solve(){
    int n;  cin>>n;
    ll tmp;
    queue<ll> q;
    q.push(1);
    do{
        tmp=q.front();  q.pop();
        q.push(tmp*10);
        q.push(tmp*10+1);
    }while(tmp%n!=0);
    cout<<tmp<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}

