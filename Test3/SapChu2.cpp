#include <iostream>
#include <cstring>
#define MAX 1000
using namespace std;
struct Tanxuat{ //d?nh nghia k� t? v� s? l?n xu?t hi?n k� t? trong x�u S
	char kytu;
	int solan;
};
int Search( Tanxuat X[], int n, char t){ //x�c d?nh v? tr� c?a t trong t?p k� t? X[]
	for(int i=0; i<=n; i++){
		if(X[i].kytu==t)
			return i;
		}
	return (n+1);
}
int Tach_Kytu(char S[], Tanxuat X[], int n){ //t�m s? k� t? v� s? l?n xu?t hi?n
	int k=strlen(S);
	for(int i=0;i<k; i++){
		int p = Search(X,n,S[i]);
		if(p<=n)X[p].solan++;
		else { n=p; X[p].kytu = S[i]; X[p].solan = 1; }
	}
	return n;
}
void Greedy_Solution(void){ 
	char S[MAX]; cout<<"Nhap xau S:";cin>>S; 
	int m=-1, n = strlen(S), chuaxet[MAX]; Tanxuat X[255];
	char STR[MAX]; 
	for (int i=0; i<n; i++)
		chuaxet[i]=true;
	m = Tach_Kytu(S, X, m);
	for(int i=0;i<=m;i++){
		cout<<X[i].kytu<<": "<<X[i].solan<<endl;
	}
}
int main(void){
	Greedy_Solution();
}
