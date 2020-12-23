#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n,k,a[11],b[11],kt;
vector<string> str;
void init(){
	str.clear();
	kt=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
}
void Try(int i){
	for(int j=1;j>=0;j--){
		b[i]=j;
		if(i==n){
			int s=0;
			for(int i=1;i<=n;i++)
				s+=a[i]*b[i];
			if(s==k)	{
				kt++;
				string st="[";
				for(int i=1;i<n;i++)
				{
					if(b[i]==1)	st+=to_string(a[i])+" ";
				}
				st+=to_string(a[n]);
				st+="]";
				str.push_back(st);
			}
		}
		else	Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1);
		if(kt==0)	cout<<"-1";
		else{
			for(int i=0;i<str.size();i++){
				cout<<str[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
