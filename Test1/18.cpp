#include<bits/stdc++.h>
using namespace std;
int n,s,t[35];
int main(){
	int dem=0;
	cin>>n>>s;
	for(int i=0;i<n;i++)
		cin>>t[i];
	//sap xep tang dan.
	sort(t,t+n);
	t[n]=0;
	for(int i=n-1;i>=0;i--){
		if(s >= t[i] && t[i]!=t[i+1]){
	        dem += 1;
	        s -= t[i];
	    }
	    if(s==0)    break;
	}
	if(s>0) cout<<-1;
	else    cout<<dem;
	return 0;
}
