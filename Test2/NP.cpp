#include<iostream>
#include<vector>
using namespace std;
int n,k;
vector<int> toHop;
vector< vector<int> > lst;
void Try(){
	int sz=toHop.size();
	for(int j=toHop[sz-1]+1;j<=n-k+sz;j++){
		toHop.push_back(j);
		if(toHop.size()==k-1)	lst.push_back(toHop);
		else	Try();
		toHop.pop_back();
	}
}
int main(){
	cin>>n>>k;
	Try();
	for(int i=0;i<lst.size();i++){
		for(int j=0;j<lst[i].size();j++){
			cout<<lst[i][j];
		}
		cout<<endl;
	}
}
