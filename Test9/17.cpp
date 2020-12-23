#include<bits/stdc++.h>
using namespace std;
int m,n;
bool vis[1005]; //mang chua xet.
vector< vector<int> > ds; //ds canh.
void Init(){
    int a,b;
    ds.clear();
    cin>>m>>n;
    ds.resize(m+1);
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds[a].push_back(b);
    }
}
void ReInit(){
    for(int i=1;i<=m;i++) //khoi tao mang chua xet.
        vis[i]=false;
}
int DFS(int u){
    int cnt=1;
    stack<int> st;
    st.push(u);
    vis[u]=true;
    while(!st.empty()){
        int x=st.top(); st.pop();
        for(int i=0;i<ds[x].size();i++){
            if(!vis[ds[x][i]]){
                vis[ds[x][i]]=true;
                cnt++;
                st.push(x);
                st.push(ds[x][i]);
                break;
            }
        }
    }
    return cnt;
}
bool kt(){
    for(int i=1;i<=m;i++){
        ReInit();
        if(DFS(i)!=m)
            return false;
    }
    return true;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        if(kt())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
