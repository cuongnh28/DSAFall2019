#include <iostream>

using namespace std;

int fib(int n){
	if(n<=2)	return 1;
	return fib(n-1)+fib(n-2);
}

int main(int argc, char** argv) {
	int n=7;
	int kq=fib(n);
	cout<<kq;
	return 0;
}
