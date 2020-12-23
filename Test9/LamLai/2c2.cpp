#include<bits/stdc++.h>
using namespace std;
int convert(string s){
    int t=0;
    for(int i=0;i<s.size();i++)
        t=t*10+(s[i]-'0');
    return t;
}
void Solve(){
    vector<int> dscanh[1005];
    int n,x;  cin>>n;
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
                if(x>i)
                    dscanh[i].push_back(x);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<dscanh[i].size();j++)
            cout<<i<<" "<<dscanh[i][j]<<endl;
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
