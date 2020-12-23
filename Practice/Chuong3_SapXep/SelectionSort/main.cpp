#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int a[], int n) {
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		a[i]= -50 + rand()% 100;
	}
}
void xuat(int a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void swap(int &a, int &b) {
	int temp=a;
	a=b;
	b=temp;
}
int min(int a[], int n, int i) {
	int min=999999;
	int vt;
	for(i;i<n;i++) {
		if(min>a[i]) {
			min=a[i];
			vt=i;
		}
	}
	return vt;
}
void SelectionSort(int a[], int n) {
	for(int i=0;i<n;i++) {
		int vt=min(a,n,i);
		if(i!=vt) {
			swap(a[i],a[vt]);
		}
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
	SelectionSort(a,n);
	xuat(a,n);
	return 0;
}
