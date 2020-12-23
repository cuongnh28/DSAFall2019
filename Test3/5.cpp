#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,t,mi,sum1,sum2;
	cin>>t;
	while(t--){
		sum1=0,sum2=0;
		int a[51];
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		if(n-k>=k){
			for(int i=0;i<k;i++){
				sum1+=a[i];
			}
			for(int i=k;i<n;i++){
				sum2+=a[i];
			}
		}
		else{
			for(int i=0;i<n-k;i++){
				sum1+=a[i];
			}
			for(int i=n-k;i<n;i++){
				sum2+=a[i];
			}
		}
		cout<<sum2-sum1<<endl;
	}
	return 0;
}
