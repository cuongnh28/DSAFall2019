#include<iostream>
using namespace std;
bool ok;
int n;
char a[11];
void init(){
	for(int i=1;i<=n;i++)
			a[i]='A';
}
void in(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=n;
	while(a[i]=='B'){
		a[i]='A';
		i--;
	}
	if(i==0)	ok=true;
	else{
		a[i]='B';
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok=false;
		cin>>n;
		init();
		while(!ok){
			in();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}
