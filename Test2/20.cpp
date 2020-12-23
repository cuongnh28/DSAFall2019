#include<iostream>
#include<vector>
using namespace std;
int t,n,a[11];
vector< vector<int> > kq;
vector< int> u;
void Init(){
	kq.clear();	u.clear();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		u.push_back(a[i]);
	}
	kq.push_back(u);
}
void Solve(int d){
	if(d==1)	return;
	u.clear();
	for(int i=1;i<d;i++){
		a[i]=a[i]+a[i+1];
		u.push_back(a[i]);
	}
	kq.push_back(u);
	Solve(d-1);
}
int main(){
	cin>>t;
	while(t--){
		Init();
		Solve(n);
		for(int i=kq.size()-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<kq[i].size()-1;j++){
				cout<<kq[i][j]<<" ";
			}
			cout<<kq[i][kq[i].size()-1]<<"]"<<" ";
		}
		cout<<endl;
	}
}
