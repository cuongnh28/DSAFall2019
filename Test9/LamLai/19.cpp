#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,a,b,cnt;
void DFS(int u){
    chuaxet[u]=false;
    for(int i=0;i<dscanh[u].size();i++){
        int v=dscanh[u][i];
        if(chuaxet[v]){
            cnt++;
            chuaxet[v]=false;
            DFS(v);
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
    vector<int> res;
    for(int i=1;i<=m;i++){
        ReInit();
        cnt=1;
        chuaxet[i]=false;
        if(i==1){
            DFS(2);
            if(cnt!=m-1)
                res.push_back(i);
        }
        else{
            DFS(1);
            if(cnt!=m-1)
                res.push_back(i);
        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
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
