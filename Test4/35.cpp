#include<bits/stdc++.h>
using namespace std;
int maxGiua(int a[], int l, int m, int r){
    int s=0,maxL=INT_MIN,maxR=INT_MIN;
    for(int i=m;i>=l;i--){
        s+=a[i];
        if(s>maxL)
            maxL=s;
    }
    s=0;
    for(int i=m+1;i<=r;i++){
        s+=a[i];
        if(s>maxR)
            maxR=s;
    }
    return maxL+maxR;
}
int timMax(int a[], int l, int r){
    if(l==r)    return a[l];
    int m=(l+r)/2;
    int maxL=timMax(a,l,m),
        maxR=timMax(a,m+1,r),
        maxG=maxGiua(a,l,m,r);
    return max(max(maxL,maxR),maxG);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[101];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int m=timMax(a,0,n-1);
        cout<<m<<endl;
    }
}
