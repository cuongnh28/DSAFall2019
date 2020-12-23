#include<bits/stdc++.h>
using namespace std;
void Solve(){
    vector<int> dscanh[1005];
    int m,n,a,b; cin>>m>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
        //dscanh[b].push_back(a);
    }
    for(int i=1;i<=m;i++){
        cout<<i<<": ";
        for(int j=0;j<dscanh[i].size();j++)
            cout<<dscanh[i][j]<<" ";
        cout<<endl;
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
