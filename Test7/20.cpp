#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        stack<long long> s;
        cin>>n;
        long long a[n+5],res[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top()<=a[i]){
                s.pop();
            }
            if(!s.empty()){
                res[i]=s.top();
            }
            else{
                res[i]=-1;
            }
            s.push(a[i]);
        }
        for(int i=0;i<n;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
}

