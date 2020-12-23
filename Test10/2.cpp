#include<bits/stdc++.h>
using namespace std;
int m,n,check;
vector<int> ds[15];
bool chuaxet[15];
void Init(){
    check=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        ds[i].clear();
    int x,y;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        ds[x].push_back(y);
        ds[y].push_back(x);
    }
}
void ReInit(){
    for(int i=1;i<=m;i++)
        chuaxet[i]=true;
}
void DFS(int u, int cnt){
    if(cnt==m){
        check=1;
        return;
    }
    for(int i=0;i<ds[u].size();i++){
        int v=ds[u][i];
        if(chuaxet[v]){
            chuaxet[v]=false;
            DFS(v,cnt+1);
            chuaxet[v]=true;
        }
    }
}
bool Solve(){
    for(int i=1;i<=m;i++){
        ReInit();
        chuaxet[i]=false;
        DFS(i,1);
        if(check==1)
            break;
    }
    cout<<check<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        Solve();
    }
}
