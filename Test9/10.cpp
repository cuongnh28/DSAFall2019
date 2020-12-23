#include<bits/stdc++.h>
using namespace std;
int m,n,s,e; //m la so dinh, n la so canh.
vector< vector<int> > dscanh;
bool chuaxet[1005];
int truoc[1005];
void Init(){
    int a,b;
    dscanh.clear();
    cin>>m>>n>>s>>e;
    dscanh.resize(m+1);
    for(int i=1;i<=m;i++){
        truoc[i]=0;
        chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh.at(a).push_back(b);
        dscanh.at(b).push_back(a);
    }
}
void DFS(){
    stack<int> st;
    st.push(s);
    chuaxet[s]=false;
    while(!st.empty()){
        int x=st.top(); st.pop();
        for(int i=0;i<dscanh.at(x).size();i++){
            if(chuaxet[dscanh.at(x).at(i)]){
                chuaxet[dscanh.at(x).at(i)]=false;
                truoc[dscanh.at(x).at(i)]=x;
                st.push(x);
                st.push(dscanh.at(x).at(i));
                break;
            }
        }
    }
}
void tim(){
    vector<int> res;
    int j=e;
    while(j!=s){
        if(truoc[j]==0){
            cout<<-1<<endl;
            return;
        }
        res.push_back(j);
        j=truoc[j];
    }
    res.push_back(s);
    for(int j=res.size()-1;j>=0;j--){
        cout<<res[j]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Init();
    	DFS();
    	tim();
	}
}
