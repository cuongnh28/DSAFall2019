#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// Cach 1(dung de quy)
//int tim(int a[], int x, int left, int right) {
//	int mid;
//	mid=(left+right)/2;
//	if(left>right)	return -1;
//	else 
//	{
//		if(a[mid]==x)	return mid;
//		else if(a[mid]>x)	return tim(a,x,left,mid-1);
//		else return tim(a,x,mid+1,right);		
//	}	
//}

// Cach 2(dung vong lap)
int tim(int a[], int n, int x) {
	int left=0;
	int right=n-1;
	int mid;
	do{
		mid=(left+right)/2;
		if(a[mid]==x)	return mid;
		else if(a[mid]>x)	right=mid-1;
		else left=mid+1;
	}while(left<=right);
	return -1;
}
void nhap(int a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	}
}
void xuat(int a[], int n){
	for(int i=0;i<n;i++) {
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	int n=7;
	int a[n];
	nhap(a,n);
	cout<<"Mang vua nhap vao: ";
	xuat(a,n);
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	//Cach 1: int kq=tim(a,x,0,n-1)+1;
	//Cach 2: 
	int kq=tim(a,n,x)+1;
	if(kq<0)	cout<<"Khong tim thay "<<x;
	else
		cout<<"Tim thay x tai vi tri: "<<kq;
	return 0;
}
