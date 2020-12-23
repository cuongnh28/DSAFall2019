#include<bits/stdc++.h>
using namespace std;
string s,res;
void Solve(){
    res="";
    res[0]=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1])
            res[i]='1';
        else
            res[i]='0';
    }
    for(int i=0;i<s.size();i++)
        cout<<res[i];
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>s;
        Solve();
    }
    return 0;
}
