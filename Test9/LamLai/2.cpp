#include<bits/stdc++.h>
using namespace std;
void Solve(){
    vector<int> dscanh[1005];
    int n,tmp;  cin>>n;
    string s;
    cin.ignore();
    for(int i=1;i<=n;i++){
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            //2 chu so.
            if(s[j]>'0' && s[j]<='9' && s[j+1]>='0' && s[j+1]<='9'){
                tmp=(s[j]-'0')*10 + (s[j+1]-'0');
                j++;
                if(i<tmp)
                    dscanh[i].push_back(tmp);
            }
            else if(s[j]>'0' && s[j]<='9'){
                tmp=s[j]-'0';
                if(i<tmp)
                    dscanh[i].push_back(tmp);
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
