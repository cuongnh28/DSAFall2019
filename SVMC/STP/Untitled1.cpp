#include<iostream>
using namespace std;
int a[100][100]; //ma tran 2 chieu.
int b[1000]; //mang chuyen tu ma tran 2 chieu sang 1 chieu.
void nhapMaTran(int N, int M){
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>a[i][j];
		}
	}
}
void xuatMaTran(int N, int M){
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
//int* chuyenMaTran(int N,int M){
//	for(int i=1;i<=N;i++){
//		for(int j=1;j<=M;j++){
//			int t = M*(i-1)+j;
//			b[t]=a[i][j];
//		}
//	}
//	return b;  //sai, chua update.
//}
void in(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// 2 2 4 3 3 5 2 3 2 5 2 2 4 1 4 5
//Ham chuyen 1 so tu trai sang phai-> dich ma tran sang trai.
void traiSangPhai(int a[], int n, int vt1, int vt2) {
	int x;
	x=a[vt1]; //danh dau x la gia tri can chuyen.
	//Chuyen sang phai, dich ma tran sang trai.
	for(int i=vt1;i<vt2;i++){
		a[i]=a[i+1];
	}
	a[vt2]=x;
}
void phaiSangTrai(int a[], int n, int vt1, int vt2){
	int x;
	x=a[vt1];
	for(int i=vt1;i>vt2;i--){
		a[i]=a[i-1];
	}
	a[vt2]=x;
}
main(){
	int T,N,M,K; //T so bo test, N hang M cot, K thao tac.
	int dem=1; //dem luot test.
	int row1,col1,row2,col2,vt1,vt2;  //(row1,col1: vi tri de di chuyen vt1) (row2,col2: vi tri di chuyen toi vt2).
	cin>>T;
	while(T--) {
	cout<<"Nhap N M K: ";
	cin>>N>>M>>K;
	cout<<"Nhap ma tran 2 chieu: ";
	nhapMaTran(N,M);
	//Chuyen tu ma tran 2 chieu sang ma tran 1 chieu.
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			int t = M*(i-1)+j;
			b[t]=a[i][j];
		}
	}
	//in(b,N*M); de test mang 1 chieu sang khi chuyen, da dung.
	//xuatMaTran(N,M); ham in ma tran. khong can thiet.
	
	cout<<"Nhap "<<K<<" thao tac, vi tri chen va vi tri chen vao(row1,col1,row2,col2): ";
	while(K--) {
		cin>>row1>>col1>>row2>>col2;
		vt1=M*(row1-1)+col1;
		vt2=M*(row2-1)+col2;
		if(vt1<vt2)	{
			traiSangPhai(b,N,vt1,vt2);
		}
		if(vt1>vt2) {
			phaiSangTrai(b,N,vt1,vt2);
		}
	}
	cout<<"#"<<dem<<" ";
	in(b,N*M);
	dem++;	
	cout<<endl;
	}
}
