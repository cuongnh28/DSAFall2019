#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,s,a,b;
void DFS(int s){
    cout<<s<<" ";
    chuaxet[s]=false;
    for(int i=0;i<dscanh[s].size();i++){
        int v=dscanh[s][i];
        if(chuaxet[v])
            DFS(v);
    }

}
void Solve(){
    cin>>m>>n>>s;
    //memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<=m;i++){
        chuaxet[i]=true;
        dscanh[i].clear();
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
        dscanh[b].push_back(a);
    }
    DFS(s);
    cout<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}
