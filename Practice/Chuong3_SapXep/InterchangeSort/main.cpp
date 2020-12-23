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
void InterchangeSort(int a[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[j]<a[i])	{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
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
	InterchangeSort(a,n);
	xuat(a,n);
	return 0;
}
