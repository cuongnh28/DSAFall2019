#include<bits/stdc++.h>
using namespace std;
int t,n,a[20][20],kt;
string s;
bool chuaxet[20][20];
vector<string> str;
void init(){
	str.clear();
	kt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			chuaxet[i][j]=true;
		}
	}
}
void add(int k){
	string st="";
	for(int i=0;i<k;i++){
		st+=s[i];
	}
	str.push_back(st);
}
void Try(int i, int j, int k){
	if(i==n && j==n){
		kt++;
		add(k);
		return;
	}
	if(i<n && a[i+1][j]==1 && chuaxet[i+1][j]){
		s[k]='D';
		chuaxet[i][j]=false;
		Try(i+1,j,k+1);
		chuaxet[i][j]=true;
	}
	if(j<n && a[i][j+1]==1 && chuaxet[i][j+1]){
		s[k]='R';
		chuaxet[i][j]=false;
		Try(i,j+1,k+1);
		chuaxet[i][j]=true;
	}
	if(i>1 && a[i-1][j]==1 && chuaxet[i-1][j]){
		s[k]='U';
		chuaxet[i][j]=false;
		Try(i-1,j,k+1);
		chuaxet[i][j]=true;
	}
	if(j>1 && a[i][j-1]==1 && chuaxet[i][j-1]){
		s[k]='L';
		chuaxet[i][j]=false;
		Try(i,j-1,k+1);
		chuaxet[i][j]=true;
	}
}
int main(){
	cin>>t;
	while(t--){
		init();
		if(a[1][1]==0 || a[n][n]==0)	cout<<"-1";
		else{
			Try(1,1,0);
			if(kt==0)	cout<<"-1";
			else{
				sort(str.begin(),str.end());
				for(int i=0;i<str.size()-1;i++){
					cout<<str[i]<<" ";
				}
				cout<<str[str.size()-1];
			}
		}
		cout<<endl;
	}
	return 0;
}
