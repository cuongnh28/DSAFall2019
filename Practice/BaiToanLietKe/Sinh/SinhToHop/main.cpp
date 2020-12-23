#include <iostream>
#define MAX 100
using namespace std;
int a[MAX],k,n;
bool ok=true;
void init() {
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap k: ";
	cin>>k;
	for(int i=1;i<=k;i++) {
		a[i]=i;
	}
}
void print() {
	for(int i=1;i<=k;i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void sinh() {
	int i=k;
	while(i>0 && a[i]==n-k+i) {
		i--;
	}
	if(i==0)	ok=false;
	else{
		a[i]++;
		for(int j=i;j<k;j++) {
			a[j+1]=a[j]+1;
		}
	}
}
int main(int argc, char** argv) {
	init();
	while(ok) {
		print();
		sinh();
	}
	return 0;
}
