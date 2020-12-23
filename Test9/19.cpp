#include<bits/stdc++.h>
using namespace std;
int m,n; //m la so dinh, n la so canh.
vector< vector<int> > dscanh;
bool chuaxet[1005];
void Init(){
    int a,b;
    dscanh.clear();
    cin>>m>>n;
    dscanh.resize(m+1);
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh.at(a).push_back(b);
        dscanh.at(b).push_back(a);
    }
}
void ReInit(){
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
    }
}
int DFS(int s){
    int cnt=1;
    stack<int> st;
    st.push(s);
    chuaxet[s]=false;
    while(!st.empty()){
        int x=st.top();    st.pop();
        for(int i=0;i<dscanh.at(x).size();i++){
            if(chuaxet[dscanh.at(x).at(i)]){
                cnt++;
                chuaxet[dscanh.at(x).at(i)]=false;
                st.push(x);
                st.push(dscanh.at(x).at(i));
                break;
            }
        }
    }
    return cnt;
}
void duyet(){
    vector<int> res;
    for(int i=1;i<=m;i++){
        ReInit();
        chuaxet[i]=false;
        if(i==1){
            if(DFS(2)!=m-1)
                res.push_back(i);
        }
        else{
            if(DFS(1)!=m-1)
                res.push_back(i);
        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Init();
    	duyet();
	}
}
