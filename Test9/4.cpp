#include<bits/stdc++.h>
using namespace std;
int mt[1005][1005];
int convert(string s){
    int x=0;
    for(int i=0;i<s.size();i++)
        x=x*10+s[i]-'0';
    return x;
}
int main(){
    int n,x;
    string s,tmp;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]-'0'>=1 && s[j]-'0'<=9){
                int t=j+1;
                tmp=s[j];
                while(s[t]-'0'>=0 && s[t]-'0'<=9){
                    tmp+=s[t];
                    t++;
                    j++;
                }
                x=convert(tmp);
                mt[i][x]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<mt[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
