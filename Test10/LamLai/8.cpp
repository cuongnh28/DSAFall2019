#include<bits/stdc++.h>
using namespace std;
vector<int> ds[1005];
bool chuaxet[1005];
#define ii pair<int, int>
vector<ii> p;
int m,n,u;
void DFS(int u){
    chuaxet[u]=false;
    for(int i=0;i<ds[u].size();i++){
        int v=ds[u][i];
        if(chuaxet[v]){
            chuaxet[v]=false;
            p.push_back(ii(u,v));
            DFS(v);
        }
    }
}
void Solve(){
    int a,b;
    cin>>m>>n>>u;
    p.clear();
    for(int i=1;i<=m;i++){
        ds[i].clear();
        chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds[a].push_back(b);
        ds[b].push_back(a);
    }
    DFS(u);
    if(p.size()!=m-1){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<p.size();i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
