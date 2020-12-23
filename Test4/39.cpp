#include<bits/stdc++.h>
using namespace std; //sai, met khong muon sua
int main(){
    int t,n,tg;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)    { cin>>tg;    a.push_back(tg); }
        for(int i=0;i<n-1;i++)  { cin>>tg;    b.push_back(tg); }
        b[n-1]=0;
        if(a[n/2]!=b[n/2]){
            cout<<n/2+1<<endl;
            continue;
        }
        for(int i=0;i<n/2;i++)
        {
            if(a[i]!=b[i])
            {
                cout<<i+1<<endl;
                break;
            }
            if(a[n-1-i]!=b[n-2-i]){
                cout<<n-i<<endl;
                break;
            }
        }
    }
    return 0;
}
