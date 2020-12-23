#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,a,b,cnt;
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
                cnt++;
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
    vector<int> res;
    for(int i=1;i<=m;i++){
        ReInit();
        cnt=1;
        chuaxet[i]=false;
        if(i==1){
            BFS(2);
            if(cnt!=m-1)
                res.push_back(i);
        }
        else{
            BFS(1);
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
