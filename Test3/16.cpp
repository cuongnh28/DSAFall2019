#include<iostream>
using namespace std;
int main(){
	int t,s,d;
	string n;
	cin>>t;
	while(t--){
		cin>>s>>d;
		if(s>9*d)	cout<<-1<<endl;
		else{
			n="";
			int i=1;
			while(s-i>9*(d-1))	i++;
			d--;
			n+=i+'0';
			s-=i;
			while(s>0){
				int i=0;
				while(s-i>9*(d-1))	i++;
				d--;
				n+=i+'0';
				s-=i;
			}
			cout<<n<<endl;
		}
	}
	return 0;
}

