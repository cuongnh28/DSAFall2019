#include<bits/stdc++.h>
using namespace std;
int m,n,s;
vector<bool> chuaxet;
vector< vector<int> > adj;
void Init(){
    chuaxet.clear();
    adj.clear();
    int a,b;
    cin>>m>>n>>s;
    adj.resize(m+5);
    for(int i=1;i<=m;i++)
        chuaxet.push_back(true);
    for(int j=1;j<=n;j++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}
void BFS(){
    int x;
    queue<int> q;
    q.push(s);
    cout<<s<<" ";
    chuaxet[s]=false;
    while(!q.empty()){
        x=q.front();
        q.pop();
        for(int i=0;i<adj[x].size();i++){
            if(chuaxet[adj[x][i]]){
                chuaxet[adj[x][i]]=false;
                q.push(adj[x][i]);
                cout<<adj[x][i]<<" ";
            }
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Init();
        BFS();
    }
}
