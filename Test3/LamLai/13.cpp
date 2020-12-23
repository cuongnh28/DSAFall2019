#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int d; string s;   cin>>d>>s;
    int n=s.size();
    int fre[26];    memset(fre,0,sizeof(fre));
    for(int i=0;i<n;i++){
        fre[s[i] - 'A']++;
    }
    int m=INT_MIN;
    for(int i=0;i<26;i++){
        if(fre[i]>m)    m=fre[i];
    }
    if( (m-1)*(d-1) > n-m)  cout<<-1<<endl;
    else    cout<<1<<endl;
}
int main(){
	int t;  cin>>t;
	while(t--){
		Solve();
	}
	return 0;
}

