#include<bits/stdc++.h>
using namespace std;
int m,n,s; //m la so dinh, n la so canh.
vector< vector<int> > dscanh;
bool chuaxet[1005];
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
        dscanh.at(a).push_back(b);
        dscanh.at(b).push_back(a);
    }
}
void DFS(){
    stack<int> st;
    st.push(s);
    cout<<s<<" ";
    chuaxet[s]=false;
    while(!st.empty()){
        int a=st.top();
        st.pop();
        for(int i=0;i<dscanh.at(a).size();i++){
            if(chuaxet[dscanh.at(a).at(i)]){
                chuaxet[dscanh.at(a).at(i)]=false;
                cout<<dscanh.at(a).at(i)<<" ";
                st.push(a);
                st.push(dscanh.at(a).at(i));
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
