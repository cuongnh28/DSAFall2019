#include<bits/stdc++.h>
using namespace std;
vector<string> str;
void Init(){
    string s1,s2,tmp1,tmp2;
    queue<string> q;
    q.push("44");
    q.push("55");
    for(int i=0;i<=10000;i++){
        string s=q.front();
        q.pop();
        str.push_back(s);
        s1="",s2="",tmp1="",tmp2="";
        for(int j=0;j<s.length()/2;j++){
            tmp1+=s[j];
            tmp2=s[j]+tmp2;
        }
        s1=tmp1+"44"+tmp2;
        s2=tmp2+"55"+tmp2;
        q.push(s1);
        q.push(s2);
    }
}
int main(){
    Init();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cout<<str[i]<<" ";
        cout<<endl;
    }
    return 0;
}
