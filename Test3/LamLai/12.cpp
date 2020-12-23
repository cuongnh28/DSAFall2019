#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s;   cin>>s;
    int n=s.size();
    int fre[26];    memset(fre,0,sizeof(fre));
    for(int i=0;i<n;i++){
        fre[s[i] - 'a']++;
    }
    int m=INT_MIN;
    for(int i=0;i<26;i++){
        if(fre[i]>m)    m=fre[i];
    }
    if(n%2==0){
        if(m<=n/2)  cout<<1<<endl;
        else    cout<<-1<<endl;
    }
    else{
        if(m<=(n+1)/2)  cout<<1<<endl;
        else    cout<<-1<<endl;
    }
}
int main(){
	int t;  cin>>t;
	while(t--){
		Solve();
	}
	return 0;
}
