#include<iostream>
#include<vector>
using namespace std;
int t,a[6],vt[6];
bool check[6],ok;
vector< vector<int> > dau;
vector<int> u;
using namespace std;
void Init(){
	for(int i=0;i<5;i++){
		cin>>a[i];
		check[i]=false;
	}
	ok=false;
}
void TryDau(){
	for(int i=1;i<=3;i++){
		u.push_back(i);
		if(u.size()==4)	dau.push_back(u);
		else	TryDau();
		u.pop_back();
	}
}
bool Ktra(){
	int sum;
	for(int i=0;i<dau.size();i++){
		sum=a[vt[0]];
		for(int j=0;j<4;j++){
			if(dau[i][j]==1)	sum+=a[vt[j+1]];
			if(dau[i][j]==2)	sum-=a[vt[j+1]];
			if(dau[i][j]==3)	sum*=a[vt[j+1]];
		}
		if(sum==23)	return true;
	}
	return false;
}
void Try(int i){
	for(int j=0;j<5;j++){
		if(!check[j]){
			check[j]=true;
			vt[i]=j;
			if(i==4)	{
				if(Ktra()){
					ok=true;
					return;
				}
			}
			else	Try(i+1);
			check[j]=false;
		}
	}
}
int main(){
	cin>>t;
	TryDau();
	while(t--){
		Init();
		Try(0);
		if(ok)	cout<<"YES";
		else	cout<<"NO";
		cout<<endl;
	}
}
