#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int convert(string s){
    int x=0;
    for(int i=0;i<s.size();i++)
        x=x*10+s[i]-'0';
    return x;
}
void Solve(){
    int n,x;  cin>>n;
    memset(a,0,sizeof(a));
    string s,tmp;
    cin.ignore();
    for(int i=1;i<=n;i++){
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]>='1' && s[j]<='9'){
                tmp=s[j];
                while(s[j+1]>='0' && s[j+1]<='9'){
                    tmp+=s[j+1];
                    j++;
                }
                x=convert(tmp);
                a[i][x]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int t=1; //cin>>t;
    while(t--)
    {
        Solve();
    }
}
