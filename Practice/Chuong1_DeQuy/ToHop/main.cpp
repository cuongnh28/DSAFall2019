#include <iostream>
using namespace std;

int toHop(int n,int k){
	if(n==k||k==0)	return 1;
	return toHop(n-1,k)+toHop(n-1,k-1);
}

int main(int argc, char** argv) {
	int kq=toHop(5,3);
	cout<<kq;
	return 0;
}
