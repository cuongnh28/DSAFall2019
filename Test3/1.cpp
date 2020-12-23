#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>n;
		while(n>0){
			if(n>=1000){
				int x=n/1000;
				cnt+=x;
				n-=x*1000;
			}
			else if(n>=500){
				int x=n/500;
				cnt+=x;
				n-=x*500;
			}
			else if(n>=200){ //1, 2, 5, 10, 20, 50, 100, 200, 500, 1000
				int x=n/200;
				cnt+=x;
				n-=x*200;
			}
			else if(n>=100){
				int x=n/100;
				cnt+=x;
				n-=x*100;
			}
			else if(n>=50){
				int x=n/50;
				cnt+=x;
				n-=x*50;
			}
			else if(n>=20){
				int x=n/20;
				cnt+=x;
				n-=x*20;
			}
			else if(n>=10){
				int x=n/10;
				cnt+=x;
				n-=x*10;
			}
			else if(n>=5){
				int x=n/5;
				cnt+=x;
				n-=x*5;
			}
			else if(n>=2){
				int x=n/2;
				cnt+=x;
				n-=x*2;
			}
			else{
				int x=n/1;
				cnt+=x;
				n-=x*1;
			}
		}
		cout<<cnt<<endl;
	}
}
