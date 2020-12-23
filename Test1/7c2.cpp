#include<bits/stdc++.h>
using namespace std;
int t[11],x[11],n,k;
void Init(){
    cin >> n;
    x[0]=1;t[0]=0;
}
void in(int vt){
	cout<<"(";
	for(int i=1;i<vt;i++)
		cout<<x[i]<<" ";
	cout<<x[vt]<<")"<<" ";
}
void Try(int i){
	for(int j=x[i-1];j<=n-t[i-1];j++){
		x[i]=j;
		t[i]=t[i-1]+x[i];
		if(t[i]==n)	in(i);
		else	Try(i+1);
	}
}
int main(){
	cin>>k;
	while(k--){
		Init();
		Try(1);
		cout<<endl;
	}
}

