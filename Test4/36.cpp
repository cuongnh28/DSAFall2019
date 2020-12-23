#include<bits/stdc++.h>
using namespace std;
long long tinh(string s1, string s2){
    int m=s1.length(),
        n=s2.length();
    long long x=0,y=0;
    for(int i=0;i<m;i++){
        x=x+(s1[i]-'0')*pow(2,m-1-i);
    }
    for(int i=0;i<n;i++){
        y=y+(s2[i]-'0')*pow(2,n-1-i);
    }
    return x*y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<tinh(s1,s2)<<endl;
    }
}
