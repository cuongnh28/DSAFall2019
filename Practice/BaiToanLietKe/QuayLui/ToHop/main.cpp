#include <iostream>
#define max 100
using namespace std;
int a[max],n,k;
void init() {
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap k: ";
	cin>>k;
}
void inkq() {
	for(int i=1;i<=k;i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i) {
	for(int j=a[i-1]+1;j<=n-k+i;j++) {
		a[i]=j;
		if(i==k)	inkq();
		else
			Try(i+1);
	}
}
int main(int argc, char** argv) {
	init();
	a[0]=0;
	Try(1);
	return 0;
}
