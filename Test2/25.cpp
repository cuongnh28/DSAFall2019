#include<bits/stdc++.h>
using namespace std;
int t,n,a[101],s;
bool check,ok[101];
void Input()
{
	check=false;
	s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
		ok[i]=true;
	}
}
void Try(int sum, int cnt){
	if(check)	return;
	if(cnt==2){ check=true; return; }
	for(int i=1;i<=n;i++){
		if(ok[i]){
			ok[i]=false;
			if(sum==s){
				Try(0,cnt+1);
				return;
			}
			if(sum>s)	return;
			else	Try(sum+a[i],cnt);
		}
		ok[i]=true;
	}
}
int main(){
	cin>>t;
	while(t--){
		Input();
		if(s%2!=0)	cout<<"NO";
		else{
			s/=2;
			Try(0,0);
			if(check)	cout<<"YES";
			else	cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
