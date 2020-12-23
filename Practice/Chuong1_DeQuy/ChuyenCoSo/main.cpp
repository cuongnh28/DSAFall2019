#include <iostream>
using namespace std;

void convert(int n){
	if(n>0) {
		int sd=n%2;
		convert(n/2);
		cout<<sd;
	}
}

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	convert(n);
	return 0;
}
