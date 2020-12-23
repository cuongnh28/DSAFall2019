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
        //dscanh.at(b).push_back(a);
    }
}
void BFS(){
    queue<int> q;
    q.push(s);
    cout<<s<<" ";
    chuaxet[s]=false;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<dscanh.at(x).size();i++){
            if(chuaxet[dscanh.at(x).at(i)]){
                chuaxet[dscanh.at(x).at(i)]=false;
                q.push(dscanh.at(x).at(i));
                cout<<dscanh.at(x).at(i)<<" ";
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
