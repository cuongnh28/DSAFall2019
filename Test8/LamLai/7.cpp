#include<bits/stdc++.h>
using namespace std;
void Solve(){
    long long n,tmp;
    cin>>n;
    int cnt=0;
    queue<long long> q;
    q.push(1);
    do{
        tmp=q.front();    q.pop();
        if(tmp<=n)
            cnt++;
        q.push(tmp*10);
        q.push(tmp*10+1);
    }while(tmp<=n);
    cout<<cnt<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}
