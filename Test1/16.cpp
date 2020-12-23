//Bai nay lam tuong tu bai 13, su dung 1 bien dem de dem so luong, con 1 string de luu cac gia tri la cac mang thoa man vao.
#include<iostream>
using namespace std;
int n,k,m[11][11],dem,a[11];
bool Ok=false;
string s[10000009];
void init(){
	dem=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>m[i][j];
	}
	for(int i=1;i<=n;i++)
		a[i]=i;
}
void sinh(){
	int i=n-1;
	while(a[i]>a[i+1])	i--;
	if(i==0)	Ok=true;
	else{
		for(int j=n;j>i;j--){
			if(a[j]>a[i])	{
				swap(a[i],a[j]);
				break;
			}
		}
		int c=i+1,d=n;
		while(d>c)	{
			swap(a[c],a[d]);
			c++;
			d--;
		}
	}
}
//ham nay lam nhien vu dem so luong va them cac mang thoa man vao cac string.
void count(){
	s[dem]="";
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=m[i][a[i]];
	}
	if(sum==k)	{
		for(int i=1;i<=n;i++){
			s[dem]+=a[i]+'0';
			s[dem]+=" ";
		}
		dem++;
	}
}
int main(){
	init();
	while(!Ok){
		count();
		sinh();
	}
	//in bien dem truoc.
	cout<<dem<<endl;
	//sau do in cac string thoa man thoi, bai cuoi cua test, done!!!
	for(int i=0;i<dem;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}
