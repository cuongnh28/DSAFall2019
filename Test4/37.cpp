#include<iostream>
#include<vector>
using namespace std;
int tim(vector<long long> a, long long x, int l, int r){
    if(x>=a[r])  return r;
    int mid=(l+r)/2;
    if(x==a[mid])   return mid;
    if(x<a[mid])    return tim(a,x,l,mid-1);
    else    return tim(a,x,mid+1,r);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        vector<long long> a;
        long long tg,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>tg;
            a.push_back(tg);
        }
        if(x<a[0])  cout<<-1<<endl;
        else{
            cout<<tim(a,x,0,n-1)+1<<endl;
        }
    }
    return 0;
}
