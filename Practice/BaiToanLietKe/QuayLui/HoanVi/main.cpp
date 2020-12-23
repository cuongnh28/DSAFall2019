#include <iostream>
#define max 15
using namespace std;
int a[max],n;
bool chuaxet[max];
void init() {
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		chuaxet[i]=true;
}
void inkq() {
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl;
}
void Try(int i) {
	for(int j=1;j<=n;j++) {
		if(chuaxet[j]) {
			a[i]=j;
			chuaxet[j]=false;
			if(i==n)	inkq();
			else	Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(int argc, char** argv) {
	init();
	Try(1);
	return 0;
}
