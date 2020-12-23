#include <iostream>
using namespace std;
void daoNguoc(int n) {
	if(n<10)	cout<<n;
	else {
		cout<<n%10;
		daoNguoc(n/10);
	}
}
int main(int argc, char** argv) {
	daoNguoc(123450);
	return 0;
}
