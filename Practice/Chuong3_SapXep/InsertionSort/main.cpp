#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int a[], int n) {
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		a[i]=rand()%100;
	}
}
void xuat(int a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void InsertionSort(int a[], int n) {
	int pos=0; // vi tri chen.
	int x; // luu gia tri chen.
	for(int i=1;i<n;i++) {
		x=a[i];
		for(pos=i;pos>0&&a[pos-1]>x;pos--) {
			a[pos]=a[pos-1];
		}
		a[pos]=x;
	}
}
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<"Mang vua nhap:\t";
	xuat(a,n);
	cout<<"Mang sau khi sap xep:\t";
	InsertionSort(a,n);
	xuat(a,n);
	return 0;
}
