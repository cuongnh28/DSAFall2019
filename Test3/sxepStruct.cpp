#include<bits/stdc++.h>
using namespace std;
struct Mau{
    char c;
    int dem;
};
bool cmp(Mau a, Mau b){
    return (a.dem>b.dem);
}
int main(){
    Mau m[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m[i].c>>m[i].dem;
    }
    sort(m,m+n,cmp);
    for(int i=0;i<n;i++){
        cout<<m[i].c<<" "<<m[i].dem<<endl;
    }
}
