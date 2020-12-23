#include<bits/stdc++.h>
using namespace std;
vector<int> ds[1005];
bool chuaxet[1005];
#define ii pair<int, int>
vector<ii> p;
int m,n,u;
void Init(){
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
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<ds[x].size();i++){
            int v=ds[x][i];
            if(chuaxet[v]){
                chuaxet[v]=false;
                q.push(v);
                p.push_back(ii(x,v));
            }
        }
    }
}
void Tim(){
    BFS(u);
    if(p.size()!=m-1)
        cout<<-1<<endl;
    else{
        for(int i=0;i<p.size();i++){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        Tim();
    }
    return 0;
}
