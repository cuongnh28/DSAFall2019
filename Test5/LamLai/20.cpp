#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
void Solve(){
	ll res=0;
	vector<int> nums;
	while(n>0){
		nums.push_back(n%10);
		n/=10;
	}
	reverse(nums.begin(),nums.end()); //vi du: 1 2 3 4
	int m=nums.size();
	for(int i=0;i<m;i++){
		ll f[12]={0},tp=0;
		f[i]=nums[i];
		tp+=f[i];
		for(int j=i+1;j<m;j++){
			f[j]=f[j-1]*10+nums[j];
			tp+=f[j];
		}
		res+=tp;
	}
	cout<<res<<endl;
}
int main(){
	int t;	cin>>t;
	while(t--){
		cin>>n;
		Solve();
	}
}
