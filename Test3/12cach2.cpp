#include<iostream>
using namespace std;
int t,n;
string a;
int check(){
	n = a.size();
	int count[26] = {0};
	for(int i = 0 ; i < n; i++ ) count[ a[i] - 'a' ]++; // dem so lan xuat hien cua moi ky tu
	int max = count[0]; // so lan xuat hien lon nhat cua ky tu
	for(int i = 0 ; i < 26 ;i++){
		if ( count[i] > max  )  max = count[i];
	}
    if( n%2 == 0 ) { // neu do dai day chan
		if( max <= n/2 ) return 1;
		else return -1;
	}
	else { // neu do dai day le
		if( max <= (n/2 + 1) ) return 1;
		else return -1;
	}
}
int main(){
	cin >> t;
	while(t--){
		cin >> a;
		cout << check() << endl;
	}
}
