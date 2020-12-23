#include<iostream>
using namespace std;
int ucln(int a,int b){
	int r;
	if(a<b)	return ucln(b,a);
	r=a%b;
	if(r==0)	return b;
	else return ucln(b,r);
}
int main(){
	int a=27,b=9;
	int kq=ucln(a,b);
	cout<<kq;
	return 0;
}
