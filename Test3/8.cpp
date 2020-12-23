#include<bits/stdc++.h>
using namespace std;
void Sort(int s[], int f[], int l, int r){
	int i=l,j=r,p=f[(i+j)/2];
	if(l>=r)	return;
	do{
		while(f[i]<p)	i++;
		while(f[j]>p)	j--;
		if(i<=j){
			swap(s[i],s[j]);
			swap(f[i],f[j]);
			i++;
			j--;
		}
	}while(i<j);
	Sort(s,f,l,j);
	Sort(s,f,i,r);
}
int main(){
	int t,n,res;
	cin>>t;
	while(t--){
		res=1;
		int s[1001],f[1001];
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>s[i];
		}
		for(int i=1;i<=n;i++){
			cin>>f[i];
		}
		Sort(s,f,1,n);
//		for(int i=1;i<=n;i++){
//			cout<<s[i]<<" "<<f[i]<<endl;
//		}
		int i=1;
		for(int j=2;j<=n;j++){
			if(s[j]>=f[i]){
				res+=1;
				i=j;
			}
		}
		cout<<res<<endl;
	}
}
