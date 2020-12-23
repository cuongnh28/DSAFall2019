#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int a[], int n); 
void xuat(int a[], int n);
void MergeSort(int a[], int left, int right);
void Merge(int a[], int left, int mid, int right);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<"Mang vua nhap:\t";
	xuat(a,n);
	cout<<"Mang sau khi sap xep:\t";
	MergeSort(a,0,n-1);
	xuat(a,n);
	return 0;
}
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
void MergeSort(int a[], int left, int right) {
	if(left>=right)	return;
	int mid=(right+left)/2;
	MergeSort(a,left,mid);
	MergeSort(a,mid+1,right);
	Merge(a,left,mid,right); 
}
void Merge(int a[], int left, int mid, int right) 
{
	int nTemp=right-left+1;
	int temp[nTemp];
	int pos=0;
	int i=left;
	int j=mid+1;
	while(i<=mid||j<=right) 
	{
		if((i<=mid && j<=right && a[i]<a[j]) || j>right) {
			temp[pos++]=a[i++];
		}
		else {
			temp[pos++]=a[j++];
		}
	}
	for(int i=0;i<nTemp;i++) {
		a[left+i]=temp[i];
	}
	
}

