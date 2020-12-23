#include<bits/stdc++.h>
using namespace std;
int m,n,s; //m la so dinh, n la so canh.
vector<int> dscanh[10005];
bool chuaxet[10005];
void Init(){
    int a,b;
    cin>>m>>n>>s;
    for(int i=1;i<=m;i++){
        dscanh[i].clear();
        chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
    }
}
void DFS(int s){
    cout<<s<<" ";
    chuaxet[s]=false;
    for(int i=0;i<dscanh[s].size();i++){
        if(chuaxet[dscanh[s][i]]){
            DFS(dscanh[s][i]);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Init();
    	DFS(s);
    	cout<<endl;
	}
}
