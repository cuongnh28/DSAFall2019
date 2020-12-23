#include<iostream>
using namespace std;
int main(){
	int t,n,k,a[1005];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		int i=k;
		while(a[i]==n-k+i)	i--;
		if(i>0){
			a[i]+=1;
			//int t=a[i]+1;
			for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]+1;
			}
			for(int i=1;i<=k;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=1;i<=k;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
