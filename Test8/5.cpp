#include<bits/stdc++.h>
using namespace std;
vector<string> str;
queue<string> q;
void Init(){
    string s1,s2;
    s1="1";
    q.push(s1);
    for(int i=0;i<=10000;i++){
        s1=q.front();
        q.pop();
        s2=s1;
        str.push_back(s1);
        q.push(s1+'0');
        q.push(s2+'1');
    }
}
int main()
{
    int t,n;
    cin>>t;
    Init();
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cout<<str[i]<<" ";
        cout<<endl;
    }
}

