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
void DFS(){
    int x;
    stack<int> st;
    st.push(s);
    chuaxet[s]=false;
    cout<<s<<" ";
    while(!st.empty()){
        x=st.top();
        st.pop();
        for(int i=0;i<=adj[x].size();i++){
            if(chuaxet[ adj[x][i] ]){
                chuaxet[ adj[x][i] ]= false;
                cout<<adj[x][i]<<" ";
                st.push(x);
                st.push(adj[x][i]);
                break;
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
        DFS();
    }
}
