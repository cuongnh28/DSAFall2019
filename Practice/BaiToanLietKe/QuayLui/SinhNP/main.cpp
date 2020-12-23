#include <iostream>
#define max 100
using namespace std;
int a[max],n;
void inkq() {
	for(int i=1;i<=n;i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i) {
	for(int j=0;j<=1;j++) {
		a[i]=j;
		if(i==n) {
			inkq();
		}
		else {
			Try(i+1);
		}
	}
}
int main(int argc, char** argv) {
	cout<<"Nhap n: ";
	cin>>n;
	Try(1);
	return 0;
}
