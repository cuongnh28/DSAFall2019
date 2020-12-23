#include <iostream>
using namespace std;
int tong(int n) {
	if(n==1)	return 1;
	else return n+tong(n-1);
}
int main(int argc, char** argv) {
	cout<<tong(4);
	return 0;
}
