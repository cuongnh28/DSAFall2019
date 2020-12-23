#include <iostream>
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
void swap(int &a, int &b) {
	int t=a;
	a=b;
	b=t;
}
void ShakerSort(int a[], int n) {
	int left=0;
	int right=n-1;
	int k=0;
	while(left<right) 
	{
		for(int i=left;i<right;i++) {
			if(a[i]>a[i+1]) 
			{
				swap(a[i],a[i+1]);
				k=i;
			}
		}
		right = k;
		
		for(int i=right;i>left;i--) 
		{
			if(a[i]<a[i-1]) 
			{
				swap(a[i],a[i-1]);
				k=i;
			}
		}
		left = k;
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
	ShakerSort(a,n);
	xuat(a,n);
	return 0;
}
