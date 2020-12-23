#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void nhap(int M[],int n) {
	srand(time(NULL));
	for (int i=0;i<n;i++) {
		M[i]=rand()%100;
	}
}

void xuat(int M[],int n) {
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
}

int LinearSearch(int M[],int n, int x) {
	for(int i=0;i<n;i++) {
		if(M[i]==x)	return i;
	}
	return -1;
}
int main(int argc, char** argv) {
	int n=7;
	int M[n];
	nhap(M,n);
	cout<<"Mang sau khi nhap ngau nhien la:\n";
	xuat(M,n);
	int x;
	cout<<"\nMoi nhap x: ";
	cin>>x;
	int kq=LinearSearch(M,n,x);
	if(kq==-1) cout<<"Khong thay "<<x<<" trong mang.";
	else
		cout<<"Thay "<<x<<" tai vi tri "<<kq+1;
	return 0;
}
