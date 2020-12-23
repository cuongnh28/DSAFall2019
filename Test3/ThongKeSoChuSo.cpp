#include<bits/stdc++.h>
using namespace std;
struct TanXuat{
	char kytu;
	int solan;
};
int Search(char c, int m, TanXuat x[]){
	for(int i=0;i<=m;i++){
		if(x[i].kytu==c)	return i;
	}
	return m+1;
}
int LietKe(char s[], int m, TanXuat x[]){
	int n=strlen(s);
	for(int i=0;i<n;i++){
		int vt=Search(s[i],m,x);
		if(vt<=m)	x[vt].solan++;
		else{
			m=vt;
			x[vt].solan=1;
			x[vt].kytu=s[i];
		}
	}
	return m;
}
int main(){
	char s[10001];
	TanXuat x[10001];
	cin>>s;
	int m=-1;
	m=LietKe(s,m,x);
	for(int i=0;i<=m;i++){
		cout<<x[i].kytu<<": "<<x[i].solan<<endl;
	}
}
