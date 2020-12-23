#include <iostream>
#include <math.h>
using namespace std;
void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
}
void xuat(int a[], int n){
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
}
float tbc(int a[], int n){
	int tong=0;
	for(int i=0;i<n;i++) {
		tong+=a[i];
	}
	return (float)tong/n;
}
int timKiemSoGanTBC(int a[], int n) {
	float x=tbc(a,n);
	int vt;
	float min=999999;
	for(int i=0;i<n;i++) {
		if(min>fabs(a[i]-x)) {
			min=fabs(a[i]-x);
			vt=i;
		}
	}
	return a[vt];
}
int main(int argc, char** argv) {
	int n;
	int a[n];
	cout<<"Nhap n: ";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	cout<<"\nSo co hieu voi TBC = "<<tbc(a,n) << " nho nhat la: "<<timKiemSoGanTBC(a,n);
	return 0;
}
