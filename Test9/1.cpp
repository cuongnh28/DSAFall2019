#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    	int m,n,a,b;
	    vector< vector<int> > adj;
	    cin>>m>>n; //m: so dinh, n: so canh.
	    adj.resize(m+1);
	    for(int i=1;i<=n;i++){
	        cin>>a>>b;
	        adj[a].push_back(b);
	        adj[b].push_back(a);
	    }
	    int cnt=1;
	    for(int i=1;i<=m;i++){
	    	cout<<cnt++<<": ";
	    	sort(adj[i].begin(),adj[i].end());
	        for(int j=0;j<adj[i].size();j++){
	            cout<<adj[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
}
