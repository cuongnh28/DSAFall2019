#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
struct SinhVien{
	char ma[10];
	char ten[150];
	bool gioitinh;
};
void nhap(SinhVien sv[], int n);
void xuat(SinhVien sv[], int n);
SinhVien * timTheoMa(SinhVien sv[],int n, char ma[]);
int main(int argc, char** argv) {
	int n=3;
	SinhVien sv[n];
	nhap(sv,n);
	cout<<"Danh sach sinh vien\n";
	xuat(sv,n);
	char matim[10];
	cout<<"Nhap ma muon tim: ";
	gets(matim);
	SinhVien *psv = timTheoMa(sv,n,matim);
	if(psv==NULL) {
		cout<<"Khong tim thay sinh vien ma "<<matim;
	}
	else {
		cout<<"Tim thay sinh vien co ma "<<matim<<":\t";
		cout<<psv->ma<<"\t"<<psv->ten<<"\t"<<(psv->gioitinh==true?"Nu":"Nam")<<"\n";
	}
	return 0;
}
void nhap(SinhVien sv[], int n){
	for(int i=0;i<n;i++) 
	{
		cout<<"Nhap ma SV: ";
		gets(sv[i].ma);
		cout<<"Nhap ten SV: ";
		gets(sv[i].ten);
		cout<<"Gioi tinh(M/F): ";
		char gt[2];
		gets(gt);
		if(strcmp(gt,"M")==0) {
			sv[i].gioitinh=false;
		}
		else sv[i].gioitinh=true;
	}
}
void xuat(SinhVien sv[], int n) {
	for(int i=0;i<n;i++) {
		cout<<sv[i].ma<<"\t"<<sv[i].ten<<"\t"<<(sv[i].gioitinh==true?"Nu":"Nam")<<"\n";
	}
}
SinhVien * timTheoMa(SinhVien sv[],int n, char ma[]) {
	 for(int i=0;i<n;i++) {
	 	if(strcmp(sv[i].ma,ma)==0) {
	 		return &sv[i];
		 }
	 }
	 return NULL;
}
