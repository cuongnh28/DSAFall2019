#include<bits/stdc++.h>
using namespace std;
int t,n,x,a[21];
bool kt;
void Init(){
	kt=false;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
}
void inkq(vector<int> s){
	cout<<"[";
	for(int i=0;i<s.size()-1;i++)
		cout<<s[i]<<" ";
	cout<<s[s.size()-1]<<"] ";
}
void Try(int x, int i, vector<int> s){
	if(x<0)	return;
	if(x==0){
		kt=true;
		inkq(s);
		return;
	}
	while(i<=n && x-a[i]>=0){
		s.push_back(a[i]);
		Try(x-a[i],i,s);
		i++;
		s.pop_back();
	}
}
int main(){
	cin>>t;
	while(t--){
		vector<int> s;
		Init();
		Try(x,1,s);
		if(!kt)	cout<<"-1";
		cout<<endl;
	}
	return 0;
}
