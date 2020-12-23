#include<bits/stdc++.h>
using namespace std;
int m,n,s; //m la so dinh, n la so canh.
vector< vector<int> > dscanh;
bool chuaxet[10005];
void Init(){
    int a,b;
    dscanh.clear();
    cin>>m>>n>>s;
    dscanh.resize(m+1);
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh[a].push_back(b);
    }
}
void DFS(){
    stack<int> st;
    st.push(s);
    cout<<s<<" ";
    chuaxet[s]=false;
    while(!st.empty()){
        int x=st.top(); st.pop();
        for(int i=0;i<dscanh[x].size();i++){
            if(chuaxet[dscanh[x][i]]){
                cout<<dscanh[x][i]<<" ";
                chuaxet[dscanh[x][i]]=false;
                st.push(x);
                st.push(dscanh[x][i]);
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
