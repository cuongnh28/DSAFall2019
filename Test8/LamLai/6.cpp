#include<bits/stdc++.h>
using namespace std;
long long covert(string s){
    long long res=0;
    for(int i=0;i<s.size();i++){
        res=res*10+(s[i]-'0');
    }
    return res;
}
void Solve(){
    int n;  cin>>n;
    string s;
    long long tmp;
    queue<string> q;
    q.push(string(1,'9'));
    do{
        s=q.front();    q.pop();
        tmp=covert(s);
        if(tmp%n==0){
            cout<<s<<endl;
        }
        q.push(s+"0");
        q.push(s+"9");
    }while(tmp%n!=0);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}
