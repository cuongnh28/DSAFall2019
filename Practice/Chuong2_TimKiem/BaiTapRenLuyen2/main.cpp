#include <iostream>
using namespace std;
void nhap(float f[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"f["<<i<<"]: ";
		cin>>f[i];
	}
}
void xuat(float f[], int n) {
	for(int i=0;i<n;i++) {
		cout<<f[i]<<"\t";
	}
}
int ktra(float f[], int left, int right, float x) {
	int mid=(right+left)/2;
	if(left>right)	return -1;
	else {
		if(f[mid]==x)	return mid;
		else if(f[mid]<x)	return ktra(f,left,mid-1,x);
		else return ktra(f,mid+1,right,x);
	}
}
int main(int argc, char** argv) {
	int n;
	float f[n];
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"--- Nhap Mang ---\n";
	nhap(f,n);
	cout<<"--- Xuat Mang ---\n";
	xuat(f,n);
	float x;
	cout<<"\nNhap so can tim: ";
	cin>>x;
	if(ktra(f,0,n-1,x)<0)
	{
		cout<<"Khong ton tai "<<x;
	}
	else 
	{
		cout<<"Ton tai "<<x;
	}
	return 0;
}
