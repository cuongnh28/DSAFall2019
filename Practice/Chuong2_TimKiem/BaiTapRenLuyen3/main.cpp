#include <iostream>
using namespace std;
struct Book{
	int ma;
	char ten[100];
	int nam;
};
void nhap(Book b[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap sach thu "<<i+1<<endl;
		cout<<"Ma: ";
		cin>>b[i].ma;
		cin.ignore();
		cout<<"Ten: ";
		gets(b[i].ten);
		cout<<"Nam: ";
		cin>>b[i].nam;
	}
}
void xuat(Book b[], int n){
	for(int i=0;i<n;i++){
		cout<<b[i].ma<<"\t"<<b[i].ten<<"\t"<<b[i].nam<<endl;
	}
}
void timTheoNam(Book b[],int n, int nam) {
	int dem=0;
	for(int i=0;i<n;i++) {
		if(b[i].nam==nam) {
			dem++;
			cout<<b[i].ma<<"\t"<<b[i].ten<<"\t"<<b[i].nam<<endl;
		}
	}
	if(dem==0) {
		cout<<"Khong ton tai sach xuat ban nam "<<nam;
	}
}
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	Book b[n];
	cout<<"--- Nhap DS Sach ---\n";
	nhap(b,n);
	cout<<"--- Xuat DS Sach ---\n";
	xuat(b,n);
	int nam;
	cout<<"Nhap nam can tim: ";
	cin>>nam;
	timTheoNam(b,n,nam);
	return 0;
}
