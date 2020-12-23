#include<iostream>
#include<cstring>
using namespace std;
void swap(char &a, char &b){
	char t=a;
	a=b;
	b=t;
}
string xuLy(string s){
	int i=s.length()-2;
	while(s[i]-'0' >= s[i+1]-'0')	i--;
	if(i==-1)	return "BIGGEST";
	else{
		for(int j=s.length()-1;j>i;j--){
			if(s[j]-'0'>s[i]-'0'){
				swap(s[i],s[j]);
				break;
			}
		}
		int c=i+1,d=s.length()-1;
		while(d>c){
			swap(s[c],s[d]);
			d--;
			c++;
		}
	}
	return s;
}
int main(){
	string s;
	int t,stt;
	cin>>t;
	while(t--){
		cin>>stt;
		cin>>s;
		cout<<stt<<" "<<xuLy(s)<<endl;
	}
	return 0;
}
