#include<bits/stdc++.h>
using namespace std;
bool check(int i){ //cac chu so khac nhau va deu nho hon bang 5.
    int s[10]={0},tmp; //chua so lan xuat hien cua cac so tu 0->9
    while(i>0){
        tmp=i%10;
        s[tmp]++;
        i/=10;
    }
    for(int j=0;j<=9;j++){
        if( (j<=5 && s[j]>1) || (j>5 && s[j]>0) ) //(neu j<=5 nhung xuat hien >1 lan) hoac ( j>5 co xuat hien la sai)
            return false;
    }
    return true;
}
int tim(int m, int n){
    int cnt=0;
    for(int i=m;i<=n;i++){
        if(check(i))
            cnt++;
    }
    return cnt;
}
int main(){
    int t,L,R;
    cin>>t;
    while(t--){
        cin>>L>>R;
        cout<<tim(L,R)<<endl;
        //cout<<check(L)<<endl;
    }
    return 0;
}
