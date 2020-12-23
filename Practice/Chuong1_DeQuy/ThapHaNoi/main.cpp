#include <iostream>
using namespace std;
void move(int n,char nguon,char trungGian,char dich){
	if(n==1) cout<<nguon<<"=>"<<dich<<"\n";
	else {
		move(n-1,nguon,dich,trungGian);
		cout<<nguon<<"=>"<<dich<<"\n";
		move(n-1,trungGian,nguon,dich);
//C2
//		move(n-1,nguon,dich,trungGian);
//		move(1,nguon,trungGian,dich);
//		move(n-1,trungGian,nguon,dich);
	}
}
int main() {
	int n=3;
	move(n,'A','B','C');
}
