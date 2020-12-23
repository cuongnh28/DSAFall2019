#include<bits/stdc++.h>
using namespace std;
vector<string> str;
queue<string> q;
void Init(){
    string s1,s2;
    s1="9";
    q.push(s1);
    for(int i=0;i<=10000;i++){
        s1=q.front();
        q.pop();
        s2=s1;
        str.push_back(s1);
        q.push(s1+'0');
        q.push(s2+'9');
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
        for(int i=0;i<=10000;i++){
            if(stoi(str[i])%n==0)
            {
                cout<<str[i]<<endl;
                break;
            }
        }
    }
}

