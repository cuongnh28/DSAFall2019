#include <iostream>
using namespace std;

int add(int n) {
	if(n==1)	return 1;
	else 
	return n*n+add(n-1);
}
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong: "<<add(n);
	return 0;
}
