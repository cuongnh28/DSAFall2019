#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,s,a,b,e,truoc[1005];
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
        truoc[i]=0;
        chuaxet[i]=true;
        dscanh[i].clear();
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
        dscanh[b].push_back(a);
    }
    DFS(s);
    int j=e;
    vector<int> res;
    while(j!=s){
        if(truoc[j]==0){
            cout<<-1<<endl;
            return;
        }
        else{
            res.push_back(j);
            j=truoc[j];
        }
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
