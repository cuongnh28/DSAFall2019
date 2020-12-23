#include<bits/stdc++.h>
using namespace std;
int U[10005];
//lam giong merge sort, luu y so nay la so chi chia het cho 2,3,5 do do 14 khong thoa man.
void Tinh(){
    U[0]=1;
    int i2=0, n2=2,
        i3=0, n3=3,
        i5=0, n5=5;
    for(int i=1;i<=10000;i++){
        int tg=min(n2,(min(n3,n5)));
        U[i]=tg;
        if(tg==n2){
            i2++;
            n2=2*U[i2];
        }
        if(tg==n3){
            i3++;
            n3=3*U[i3];
        }
        if(tg==n5){
            i5++;
            n5=5*U[i5];
        }
    }
}
int main(){
    int t,n;
    Tinh();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<U[n-1]<<endl;
    }
}

