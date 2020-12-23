#include<iostream>
using namespace std;
int main(){
	int t,n,k,a[41];
	cin>>t;
	while(t--){
		int res=0;
		int d[41]={0};
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			d[a[i]]=1;
		}
		int i=k;
		while(a[i]==n-k+i) i--;
		if(i==0)	res=k;
		else{
			a[i]+=1;
			for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]+1;
			}
			for(int j=1;j<=k;j++){
				d[a[j]]=0;
			}
			for(int i=1;i<41;i++){
				if(d[i]==1)	{
					res+=1;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
