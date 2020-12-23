#include <iostream>
using namespace std;
struct SanPham{
	int ma;
	char ten[50];
	float gia;
};
void nhap(SanPham sp[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Ma: ";
		cin>>sp[i].ma;
		cin.ignore();
		cout<<"Ten: ";
		gets(sp[i].ten);
		cout<<"Gia: ";
		cin>>sp[i].gia;
		cout<<endl;
	}
}
void xuat(SanPham sp[], int n) {
	for(int i=0;i<n;i++) {
		cout<<sp[i].ma<<"\t"<<sp[i].ten<<"\t"<<sp[i].gia<<endl;
	}
}
SanPham * timTheoGia(SanPham sp[], float gia, int left, int right) {
	int mid=(right+left)/2;
	if(left>right)	return NULL;
	else{
		if(sp[mid].gia==gia)	return &sp[mid];
		else if(sp[mid].gia>gia)	return timTheoGia(sp, gia, left, mid-1);
		else return timTheoGia(sp, gia, mid+1, right);
	}
}	
int main(int argc, char** argv) {
	int n=4;
	SanPham sp[n];
	nhap(sp,n);
	cout<<"Mang san pham:\n";
	xuat(sp,n);
	float gia;
	cout<<"Nhap gia can tim: ";
	cin>>gia;
	SanPham *spt = timTheoGia(sp,gia,0,n-1);
	if(spt==NULL)	cout<<"Khong tim thay.\n";
	else
		cout<<spt->ma<<"\t"<<spt->ten<<"\t"<<spt->gia;
	return 0;
}
