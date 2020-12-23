#include <iostream>
using namespace std;
void nhap(float a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
}
void xuat(float a[], int n){
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
}
int demX(float a[], int n, float x) {
	int dem=0;
	for(int i=0;i<n;i++) {
		if(a[i]==x) 
			dem++;
	}
	return dem;
}
float timMaxChan(float a[], int n){
	float max=-9999999;
	for(int i=0;i<n;i++) {
		int f1=(int) a[i];
		if(a[i]==f1) {
			if(a[i]>max && f1%2==0) 
			max=a[i];
		}
	}
	return max;
}

float timMinLe(float a[], int n){
	float min=9999999;
	for(int i=0;i<n;i++) {
		int f1=(int) a[i];
		if(f1==a[i]) {
			if(a[i]<min && f1%2==1) {
				min=a[i];
			}
		}
	}
	return min;
}
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	float a[n];
	cout<<"--- Nhap mang ---\n";
	nhap(a,n);
	cout<<"--- Xuat mang ---\n";
	xuat(a,n);
	float x;
	cout<<"\nNhap x: ";
	cin>>x;
	cout<<x<<" xuat hien "<<demX(a,n,x)<<" lan.";
	cout<<"\nSo chan lon nhat trong mang: "<<timMaxChan(a,n);
	cout<<"\nSo le nho nhat trong mang: "<<timMinLe(a,n);
	return 0;
}
