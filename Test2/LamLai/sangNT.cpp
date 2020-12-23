#include<bits/stdc++.h>
using namespace std;
int main(){
    bool nt[205];
    memset(nt,true,sizeof(nt));
    for(int i=2;i<=sqrt(200);i++){
        if(nt[i]){
            for(int j=2*i;j<=200;j+=i)
                nt[j]=false;
        }
    }
    for(int i=2;i<=200;i++){
        if(nt[i])
            cout<<i<<" ";
    }
    return 0;
}

