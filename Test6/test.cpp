#include<bits/stdc++.h>
using namespace std;
int gttuyetdoi(int b,int X){     
    if(X>=b) return X-b;
	return b-X;
}
int main(){
	int T; cin>>T;
	while(T--){
	int n,X,A[100000],B[100000];
	cin>>n>>X;
	for(int i=0;i<n;i++){
			cin>>A[i];
	}
	for(int i=0; i<n; i++){
		B[i]=gttuyetdoi(A[i],X);              //gan cac gia tri tuyet doi vao mang B[i]
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(B[i]>B[j]){
				      swap(B[i],B[j]);
				      swap(A[i],A[j]);
				}
			}
		}
	for(int i=0; i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	}	
	return 0;
}
