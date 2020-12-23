#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int t,n,tg,s,f;
	long long res;
	cin>>t;
	while(t--){
		res=0;
		priority_queue< int, vector<int>, greater<int> > pq;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>tg;
			pq.push(tg);
		}
		while(pq.size()>1){
			f=pq.top();	res+=f;	pq.pop();
			s=pq.top();	res+=s;	pq.pop();
			pq.push(f+s);
		}
		cout<<res<<endl;
	}
	return 0;
}
