#include<bits/stdc++.h>
using namespace std;
int stt;
string s;
void Solve(){
    int n=s.size(),i;
    i=n-2;
    while(s[i]>=s[i+1] && i>0)  i--;
    if(i==0){
        cout<<stt<<" BIGGEST"<<endl;
        return;
    }
    else{
        for(int j=n-1;j>=0;j--){
            if(s[j]>s[i]){
                swap(s[i],s[j]);
                break;
            }
        }
        int c=i+1,d=n-1;
        while(c<d){
            swap(s[c],s[d]);
            c++;    d--;
        }
        cout<<stt<<" "<<s<<endl;
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>stt>>s;
        Solve();
    }
    return 0;
}
