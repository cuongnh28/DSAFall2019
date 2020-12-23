#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
void swap(int &a, int &b) {
	int temp=a;
	a=b;
	b=temp;
}
void BubbleSort(int a[], int n);
void SelectionSort(int a[], int n);
void InsertionSort(int a[], int n);
void InterchangeSort(int a[], int n);
void QuickSort(int a[], int left, int right);
//void MergeSort(int a[], int n);
int *a;
int n;
int main(int argc, char** argv) {
	int chon;
	bool key=true;
	while(key==true) {
		cout<<"1. Nhap mang."<<endl;
		cout<<"2. Xuat mang."<<endl;
		cout<<"3. BubbleSort"<<endl;
		cout<<"4. SelectionSort"<<endl;
		cout<<"5. InsertionSort"<<endl;
		cout<<"6. InterchangeSort"<<endl;
		cout<<"7. QuickSort"<<endl;
		cout<<"8. MergeSort"<<endl;
		cout<<"0. Thoat!!!"<<endl;
		cout<<"Ban chon: ";
		cin>>chon;
		switch(chon) {
			case 1:
				cout<<"Nhap n: ";
				cin>>n;
				if(a!=NULL) {
					delete a;
					a=NULL;
				}
				a=new int[n];
				nhap(a,n);
				break;
			case 2:
				xuat(a,n);
				break;
			case 3:
				BubbleSort(a,n);
				break;
			case 4:
				SelectionSort(a,n);
				break;
			case 5:
				InsertionSort(a,n);
				break;
			case 6:
				InterchangeSort(a,n);
				break;
			case 7:
				QuickSort(a,0,n-1);
				break;
//			case 8:
//				MergeSort(a,n);
//				break;
			case 0:
				cout<<"Ket thuc!!!";
				key=false;
			default:
				cout<<"Vui long nhap lai."<<endl;		
		}
	}
	return 0;
}
void nhap(int a[], int n) 
{
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		a[i]=rand()%100;
	}
}
void xuat(int a[], int n) 
{
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void BubbleSort(int a[], int n){
	for(int i=0;i<n;i++) {
		for(int j=n-1;j>i;j--) {
			if(a[i]>a[j]) {
				swap(a[i],a[j]);
			}
		}
	}
}
int min(int a[], int l, int n) {
	int min=9999;
	for(int i=l;i<n;i++) {
		if(a[i]<min) {
			min=a[i];
		}
	}
	return min;
}
void SelectionSort(int a[], int n) {
	for(int i=0;i<n;i++) {
		a[i]=min(a,i+1,n);
	}
}
void InterchangeSort(int a[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
}
void InsertionSort(int a[], int n){
	int pos=0;
	int x;
	for(int i=1;i<n;i++) {
		 x=a[i];
		for(pos=i;pos>0&&a[pos-1]>x;pos--) {
			a[pos]=a[pos-1];
		}
		a[pos]=x;
	}
}
void QuickSort(int a[], int left, int right) {
	int i=left;
	int j=right;
	int x=a[(left+right)/2];
	if(left>=right)	return;
	do{
	while(a[i]<x)	i++;
	while(a[j]>x)	j--;
	if(i<=j) 
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<j);
	QuickSort(a,left,j);
	QuickSort(a,i,right);
}
