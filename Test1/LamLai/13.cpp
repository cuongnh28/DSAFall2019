#include<bits/stdc++.h>
using namespace std;
int n,k,res=0;
vector<string> str;
string s;
char a[20];
void Try(int i){
    for(char j='A';j<='B';j++){
        a[i]=j;
        if(i==n){
            int cnt=1,kt=0;
            for(int m=1;m<n;m++){
                if(a[m]==a[m+1] && a[m]=='A')
                    cnt++;
                else    cnt=1;
                if(cnt>=k)  kt++;
            }
            if(kt==1){
                res++;
                s="";
                for(int m=1;m<=n;m++){
                    s+=a[m];
                }
                str.push_back(s);
            }
        }
        else    Try(i+1);
    }
}
int main(){
    cin>>n>>k;
    Try(1);
    cout<<res<<endl;
    for(int i=0;i<str.size();i++)
        cout<<str[i]<<endl;
    return 0;
}
