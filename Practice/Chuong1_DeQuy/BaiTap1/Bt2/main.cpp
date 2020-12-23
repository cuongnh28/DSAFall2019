#include <iostream>
using namespace std;
int tongChuSo(int n){
	if(n==0)
	{
		return 0;
	}
	else {
		return n%10+tongChuSo(n/10);
	}
}
int main(int argc, char** argv) {
	cout<<"Tong cua so 12345 la "<<tongChuSo(12345);
	return 0;
}
