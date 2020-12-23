#include <iostream>
#include <string.h>
using namespace std;
struct SinhVien{
	char ma[10];
	char ten[100];
	bool sex;
};
void nhap(SinhVien sv[],int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap ma: ";
		gets(sv[i].ma);
		cout<<"Nhap ten: ";
		gets(sv[i].ten);
		cout<<"Gioi tinh(M/F): ";
		char gt[2];
		gets(gt);
		if(strcmp(gt,"M")==0) {
			sv[i].sex=true;
		}
		else
			sv[i].sex=false;
	}
}
void xuat(SinhVien sv[], int n){
	for(int i=0;i<n;i++) {
		cout<<sv[i].ma<<"\t"<<sv[i].ten<<"\t"<<(sv[i].sex==true?"Nam":"Nu")<<"\n";
	}
}
SinhVien * timTheoMa(SinhVien sv[], int n, char ma[]) {
	for(int i=0;i<n;i++) {
		if(strcmp(sv[i].ma,ma)==0) {
			return &sv[i];
		}
	}
	return NULL;
}
SinhVien * timTheoTen(SinhVien sv[], int n, char ten[]) {
	for(int i=0;i<n;i++) {
		if(strcmp(sv[i].ten,ten)==0) {
			return &sv[i];
		}
	}
	return NULL;
}
int main(int argc, char** argv) {
	int n=2;
	SinhVien sv[n];
	nhap(sv,n);
	xuat(sv,n);
	//Tim theo ma.
	char ma[10];
	cout<<"Nhap ma can tim: ";
	gets(ma);
	SinhVien *psv = timTheoMa(sv,n,ma);
	if(psv == NULL) {
		cout<<"Khong tim thay.";
	}
	else {
		cout<<"Tim thay sinh vien ma "<<ma<<"\n";
		cout<<psv->ma<<"\t"<<psv->ten<<"\t"<<(psv->sex==true?"Nam":"Nu")<<"\n";
	}
	
	//Tim theo ten.
	char ten[150];
	cout<<"\nNhap ten can tim: ";
	gets(ten);
	SinhVien *pst=timTheoTen(sv,n,ten);
	if(pst==NULL) {
		cout<<"Khong tim thay sinh vien ten "<<ten<<"\n";
	}
	else {
		cout<<"Sinh vien ten "<<ten<<"\n";
		cout<<pst->ma<<"\t"<<pst->ten<<"\t"<<(pst->sex==true?"Nam":"Nu");
	}
	
	return 0;
}
