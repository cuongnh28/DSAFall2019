#include<iostream>
#include<cstring>
#define MAX 100000
using namespace std;
struct TanXuat{
	char kytu;
	int solan;
};
//tim vi tri cua ky tu t trong day x.
int viTri(char t, TanXuat x[], int m){
	for(int i=0;i<=m;i++){
		if(x[i].kytu==t)	return i;
	}
	return m+1;
	//Neu ton tai thi tra ve i, neu chua thi phai tang so luong phan tu cua x them 1.
}
int lietke(char s[], TanXuat x[], int m){ //m la so luong ky tu khac nhau.
	int k=strlen(s);
	for(int i=0;i<k;i++){
		int vt=viTri(s[i],x,m);
		if(vt<=m)	x[vt].solan++;
		else{
			m=vt;
			x[vt].solan=1;
			x[vt].kytu=s[i];
		}
	}
	return m;
}
void sxep(TanXuat x[], int l, int r){	
	int i=l,j=r,
		pivot=x[(i+j)/2].solan;
	if(l>=r)	return;
	do
	{
		while(x[i].solan > pivot)	i++;
		while(x[j].solan < pivot)	j--;
		if(i<=j)
		{
			TanXuat tmp;
			tmp=x[i];
			x[i]=x[j];
			x[j]=tmp;
			i++;
			j--;
		}
	}while(i<j);
	sxep(x,l,j);
	sxep(x,i,r);
}
void Solve(){
	char s[MAX],kq[MAX];
	TanXuat x[MAX];
	bool chuaxet[MAX]={false};
	int m=-1,d;
	cin>>s;
	int n=strlen(s);
	cin>>d;
	m=lietke(s,x,m);
	sxep(x,0,m);
	for(int i=0;i<=m;i++){
		int k=x[i].solan;
		int t=0;
		while(chuaxet[t])	t++;
		for(int j=0;j<k;j++){
			if(t+j*d>=n)	{
				cout<<"Vo ngiem.";
				return;
			}
			else{ 
				kq[t+j*d]=x[i].kytu;
				chuaxet[t+j*d]=true;
			}
		}
	}
	for(int i=0;i<strlen(s);i++){
		cout<<kq[i];
	}
}
int main(){
	Solve();
	return 0;
}
