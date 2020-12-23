#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],m,n;
int main(){
    int t;
    cin>>t;
    while(t--){
        priority_queue< int, vector<int>, greater<int> > pq;
        int i,j;
        cin>>m>>n;
        for(i=0;i<m;i++){
            cin>>a[i];
            pq.push(a[i]);
        }
        for(j=0;j<n;j++){
            cin>>b[j];
            pq.push(b[j]);
        }
        while(pq.size()>0){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
    }
}
