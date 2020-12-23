#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,s,e,a,b,truoc[1005];
void DFS(int u){
    chuaxet[u]=false;
    for(int i=0;i<dscanh[u].size();i++){
        int v=dscanh[u][i];
        if(chuaxet[v]){
            chuaxet[v]=false;
            truoc[v]=u;
            DFS(v);
        }
    }
}
void Solve(){
    cin>>m>>n>>s>>e;
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
        dscanh[i].clear();
        truoc[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
    }
    DFS(s);
    vector<int> res;
    int j=e;
    while(j!=s){
        if(truoc[j]==0){
            cout<<-1<<endl;
            return;
        }
        res.push_back(j);
        j=truoc[j];
    }
    res.push_back(s);
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
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
