#include <iostream>
#include <stdlib.h>
#include <time.h>;
using namespace std;
void nhap(int a[], int n){
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		a[i]=rand()%100;
	}
}
void xuat(int a[],int n) {
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
}
float TBC(int a[], int n, int k) {
	int dem=0;
	int tong=0;
	for(int i=0;i<n;i++) {
		if(a[i]>=k) {
			dem++;
			tong+=a[i];
		}
	}
	if(dem==0)	return -1;
	return (float) tong/dem;
}
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<"--- Xuat Mang ---"<<endl;
	xuat(a,n);
	cout<<"\nNhap k: ";
	int k;
	cin>>k;
	cout<<"Trung binh cong cua mang cac so >= "<<k<<": "<<TBC(a,n,k);
	return 0;
}
