#include<bits/stdc++.h>
using namespace std;
int t,m,n,a[100005],b[100005];
vector<int> giao;
vector<int> hop;
void Input(){ //ham nhap.
    cin>>m>>n;
    for(int i=0;i<m;i++)   cin>>a[i];
    for(int j=0;j<n;j++)   cin>>b[j];
    sort(a,a+n);
    sort(b,b+n);
}
void Solve(){
    giao.clear();
    hop.clear();
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]==b[j]){
            giao.push_back(a[i]);
            hop.push_back(b[j]); //neu a[i] == b[j] thi tang i va j len dong thoi them vao giao,hop.
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            hop.push_back(a[i]); //neu a[i]<b[j] thi tang hop len dong thoi tang i len.
            i++;
        }
        else{
            hop.push_back(b[j]); //neu a[i]>b[j] thi tang hop len dong thoi tang j len.
            j++;
        }
    }
    while(i<m){
        hop.push_back(a[i]);
        i++;
    }
    while(j<n){
        hop.push_back(b[j]);
        j++;
    }
    for(i=0;i<hop.size();i++){
        cout<<hop[i]<<" ";
    }
    cout<<endl;
    if(!giao.empty()){
        for(i=0;i<giao.size();i++){
            cout<<giao[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>t;
    while(t--){
        Input();
        Solve();
    }
    return 0;
}

