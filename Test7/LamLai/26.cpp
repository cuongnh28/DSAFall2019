#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n, a[100005], s[100005];
    stack<int> st;
    st.push(0);
    s[0]=1;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        while(!st.empty() && a[i]>=a[st.top()]){
            st.pop();
        }
        if(st.empty()){
            s[i]=i+1;
        }
        else{
            s[i]=i-st.top();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<" ";
}
int main(){
    int t=1;  //cin>>t;
    while(t--){
        Solve();
    }
}
