#include<bits/stdc++.h>
using namespace std;
int cnt;
int tim(int a[], int l, int r, int x){
    if(l>r)    return -1;
    int m=(l+r)/2,i,j;
    if(a[m]==x){
        cnt=1;
        for(i=m+1;i<=r;i++){
            if(a[i]!=x)
                break;
            else
                cnt++;
        }
        for(j=m-1;j>=0;j--){
            if(a[j]!=x)
                break;
            else
                cnt++;
        }
        return cnt;
    }
    else if(a[m]>x){
        return tim(a,l,m-1,x);
    }
    else{
        return tim(a,m+1,r,x);
    }
}
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        int a[1005],cnt=0;
        cin>>n>>x;
        for(int i=0;i<n;i++)   cin>>a[i];
        if(x>a[n-1] || x<a[0]){
            cout<<-1<<endl;
            continue;
        }
        cout<<tim(a,0,n-1,x)<<endl;
    }
}
