#include<bits/stdc++.h>
using namespace std;
int t,n,p,s,x[10000],vt1,vt2,d[50],dem=0,a[10000];
int snt[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47, 
53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,
137,139,149,151,157,163,167,173,179,181,191,193,197,199};
vector<string> kq;
void vt(){
	for(int i=0;i<=46;i++){
		if(snt[i]==p)	vt1=i;
		if(snt[i]>s)	{ vt2=i-1; break; }
	}
}
void Try(int i){
	for(int j=a[i-1]+1;j<=vt2-n+i;j++){
			x[i]=snt[j];
			a[i]=j;
			if(i==n){
				int tong=0;
					for(int k=1;k<=n;k++){
						tong+=x[k];
					}
					if(tong==s){
						string str="";
						for(int k=1;k<=n;k++){
							str+=to_string(x[k]);
							str+=" ";
						}
						kq.push_back(str);
					}
				}
			else	Try(i+1);
		}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>p>>s;
		vt();
		a[0]=vt1-1;
		Try(1);
		cout<<kq.size()<<endl;
		for(int i=0;i<kq.size();i++)
			cout<<kq[i]<<endl;
		kq.clear();
	}
	return 0;
}
