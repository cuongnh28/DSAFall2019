#include<iostream>
using namespace std;
int t,a[6],vt[6];
bool check[6],ok;
void Init(){
	ok=false;
	for(int i=1;i<=5;i++){
		cin>>a[i];
		check[i]=false;
	}
}
void Ktra(int sum, int i){
	if(i==5){
		if(sum==23){
			ok=true;
			return;
		}
	}
	for(int j=1;j<=3;j++){
		if(i<5 && j==1)	Ktra(sum+a[vt[i+1]], i+1);
		if(i<5 && j==2)	Ktra(sum-a[vt[i+1]], i+1);
		if(i<5 && j==3)	Ktra(sum*a[vt[i+1]], i+1);
	}
}
void Try(int i){
	for(int j=1;j<=5;j++){
		if(!check[j]){
			check[j]=true;
			vt[i]=j;
			if(i==5)	{
				Ktra(a[vt[1]], 1);
				if(ok)	return;
			}
			else	Try(i+1);
			check[j]=false;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		Init();
		Try(1);
		if(!ok)	cout<<"NO";
		else	cout<<"YES";
		cout<<endl;
	}
}
