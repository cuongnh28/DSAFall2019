#include<bits/stdc++.h>
using namespace std;
string str[10005];
void Tinh(){
    string s;
    queue<string> q;
    q.push(string(1,'1'));
    str[0]="1";
    for(int i=1;i<10000;i+=2){
        s=q.front();    q.pop();
        q.push(s+"0");  str[i]=s+"0";
        q.push(s+"1");  str[i+1]=s+"1";
    }
}
int main()
{
    Tinh();
    int t=1,n; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cout<<str[i]<<" ";
        cout<<endl;
    }
}
