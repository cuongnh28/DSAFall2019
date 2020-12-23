#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,minA=0,minB=0,maxA=0,maxB=0,Min,Max;
	stack<int> a1;
	stack<int> b1;
	cin>>a>>b;
	while(a>0){
		a1.push(a%10);
		a/=10;
	}
	while(b>0){
		b1.push(b%10);
		b/=10;
	}
	while(a1.size()>0){
		if(a1.top()==5 || a1.top()==6){
			maxA=maxA*10+6;
			minA=minA*10+5;
		}
		else{
			minA=minA*10+a1.top();
			maxA=maxA*10+a1.top();
		}
		a1.pop();
	}
	while(b1.size()>0){
		if(b1.top()==5 || b1.top()==6){
			maxB=maxB*10+6;
			minB=minB*10+5;
		}
		else{
			minB=minB*10+b1.top();
			maxB=maxB*10+b1.top();
		}
		b1.pop();
	}
	cout<<minA+minB<<" "<<maxA+maxB;
}
