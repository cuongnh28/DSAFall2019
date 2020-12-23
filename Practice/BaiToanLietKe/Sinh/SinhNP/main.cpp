#include <iostream>
#define MAX 100
using namespace std;
int a[MAX],n;
bool Ok=true;
void init() {
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++) {
		a[i]=0;
	}
}
void print() {
	for(int i=1;i<=n;i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void sinh() {
	int i=n;
	while(i>0 && a[i]==1) {
		a[i]=0;
		i--;
	}
	if(i==0)	Ok=false;
	else 
		a[i]=1;
}
int main(int argc, char** argv) {
	init();
	while(Ok) {
		print();
		sinh();
	}
}
