#include<bits/stdc++.h>
using namespace std;
void Solve(int n){
    //1, 2, 5, 10, 20, 50, 100, 200, 500, 1000
    int cnt=0;
    while(n>=1000){
        cnt++;
        n-=1000;
    }
    while(n>=500){
        cnt++;
        n-=500;
    }
    while(n>=200){
        cnt++;
        n-=200;
    }
    while(n>=100){
        cnt++;
        n-=100;
    }
    while(n>=50){
        cnt++;
        n-=50;
    }
    while(n>=20){
        cnt++;
        n-=20;
    }
    while(n>=10){
        cnt++;
        n-=10;
    }
    while(n>=5){
        cnt++;
        n-=5;
    }
    while(n>=2){
        cnt++;
        n-=2;
    }
    while(n>=1){
        cnt++;
        n-=1;
    }
    cout<<cnt<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        Solve(n);
    }
    return 0;
}
