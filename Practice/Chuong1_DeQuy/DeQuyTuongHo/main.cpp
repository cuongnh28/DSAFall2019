#include <iostream>

using namespace std;

bool isEven(int n); //chan
bool isOdd(int n); //le
bool isEven(int n){
	if(n==0)	return true;
	else return isOdd(n-1);
}
bool isOdd(int n) {
	return !isEven(n);
}
int main(int argc, char** argv) {
	int n1=9;
	bool kq=isEven(n1);
	if(kq)	cout<<"So chan.";
	else cout<<"So le.";
	return 0;
}
