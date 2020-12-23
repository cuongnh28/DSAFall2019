#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int, vector<int>, greater<int>> pq;
	int n,a[100];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pq.push(a[i]);
	}
	int xopt=0,f,s;
	while(pq.size()>1){
		f=pq.top();	pq.pop();	xopt+=f;
		s=pq.top();	pq.pop();	xopt+=s;
		pq.push(f+s);
	}
	cout<<xopt;
}
