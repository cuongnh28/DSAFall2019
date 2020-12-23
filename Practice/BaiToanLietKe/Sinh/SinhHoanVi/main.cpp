#include <iostream>
#define max 100
using namespace std;
int a[max],n;
bool ok=true;
void swap(int &a, int &b) {
	int t=a;
	a=b;
	b=t;
}
void init() {
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		a[i]=i;
}
void print() {
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl;
}
void sinh() {
	int i=n-1;
	while(i>0 && a[i]>a[i+1]) {
		i--;
	}
	if(i>0) {
		int k=n;
		while(a[i]>a[k]) {
			k--;
		}
		swap(a[i],a[k]);
		int l=i+1,r=n;
		while(l<=r) {
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	else 
		ok=false;
}
int main(int argc, char** argv) {
	init();
	while(ok){
		print();
		sinh();
	}
	return 0;
}
