#include<bits/stdc++.h>
using namespace std;
int t,k; 
string s;
void Init(){
	//nhap k,s
	cin>>k;
	cin>>s;
}
void Solve(int k, int bd){
	//cho 2 vong lap i chay tu 0, j chay tu i+1 long nhau. Neu s[i] < max(s[j]) thi doi vi tri va tru k di 1.
	//vong lap ket thuc khi k==0 hoac i==s[lenght)-1;
	for(int i=0;i<s.length()-1;i++){
		if(k==0)	break;
		char max=s[i];
		int vt;
		for(int j=s.length();j>i;j--){
			if(s[j]>max)	{
				max=s[j];
				vt=j;
			}
		}
		if(s[i]!=max)	{
			swap(s[i],s[vt]);
			k--;
		}
	}

	cout<<s<<endl;	
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		Init();
		Solve(k,0);
	}
	return 0;
}
