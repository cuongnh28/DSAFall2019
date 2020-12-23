#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,a,b;
void BFS(int u){
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int t=q.front();    q.pop();
        for(int i=0;i<dscanh[t].size();i++){
            int v=dscanh[t][i];
            if(chuaxet[v]){
                chuaxet[v]=false;
                q.push(v);
            }
        }
    }
}
void ReInit(){
    for(int i=1;i<=m;i++)
        chuaxet[i]=true;
}
void Solve(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        dscanh[i].clear();
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
        dscanh[b].push_back(a);
    }
    bool kt;
    for(int i=1;i<=m;i++){
        for(int j=0;j<dscanh[i].size();j++){
            ReInit();
            kt=false;
            int v=dscanh[i][j];
            dscanh[i].erase(dscanh[i].begin()+j);
            BFS(i);
            for(int i=1;i<=m;i++){
                if(chuaxet[i]){
                    kt=true;
                    break;
                }
            }
            if(kt && i<v)
                cout<<i<<" "<<v<<" ";
            dscanh[i].insert(dscanh[i].begin()+j,v);
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
