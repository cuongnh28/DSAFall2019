#include<bits/stdc++.h>
using namespace std;
string s;
void Solve(){
	int freq[30];
	memset(freq,0,sizeof(freq));
	for(int i=0;i<s.size();i++){
		freq[s[i]-'A']++;
	}
	for(int i=0;i<26;i++){
		cout<<char('A'+i)<<": "<<freq[i]<<endl;
	}
}
int main(){
	int t;	cin>>t;
	while(t--){
		cin>>s;
		Solve();
	}
}
