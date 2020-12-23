#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int * Mang = new int[n];
	for(int i=0;i<n;i++) {
		Mang[i]=i;
		cout<<i<<" ";
	}
	return 0;
}
 
