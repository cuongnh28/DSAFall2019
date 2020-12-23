#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int a[], int n) {
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		a[i]=rand()%100;
	}
//	for(long i=0;i<n;i++) {
//			cin>>a[i];
//		}
}
void xuat(int a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void QuickSort(int a[], int left, int right) {
	int i=left,j=right;
	int pivot=a[(right+left)/2];
	if(left>=right)	return;
	do{
		while(a[i]<pivot)	i++;
		while(a[j]>pivot)	j--;
		if(i<=j) {
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}
	}while(i<j);
	QuickSort(a,i,right);
	QuickSort(a,left,j);
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
	QuickSort(a,0,n-1);
	xuat(a,n);
	return 0;
}
//https://www.spoj.com/SVMC1609/problems/TSORT
