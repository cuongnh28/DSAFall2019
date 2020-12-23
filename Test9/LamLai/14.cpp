#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,s,e,a,b,truoc[1005];
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
                truoc[v]=t;
                q.push(v);
            }
        }
    }
}
void Solve(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
        dscanh[i].clear();
    }
    for(int i=0;i<n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
        dscanh[b].push_back(a);
    }
    int k;  cin>>k;
    while(k--){
        memset(truoc,0,sizeof(truoc));
        memset(chuaxet,true,sizeof(chuaxet));
        cin>>s>>e;
        BFS(s);
        int j=e;
        while(j!=s){
            if(truoc[j]==0){
                cout<<"NO"<<endl;
                break;
            }
            j=truoc[j];
        }
        if(j==s)    cout<<"YES"<<endl;
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
