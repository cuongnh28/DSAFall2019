#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> dscanh[1005];
int m,n,s,a,b;
void Solve(){
    queue<int> q;
    cin>>m>>n>>s;
    for(int i=0;i<=m;i++){
        chuaxet[i]=true;
        dscanh[i].clear();
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
        dscanh[b].push_back(a);
    }
    q.push(s);
    chuaxet[s]=false;
    cout<<s<<" ";
    while(!q.empty()){
        int t=q.front();    q.pop();
        for(int i=0;i<dscanh[t].size();i++){
           int v=dscanh[t][i];
           if(chuaxet[v]){
                chuaxet[v]=false;
                q.push(v);
                cout<<v<<" ";
           }
        }
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
