#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n, a[100005];
    stack<int> st;
    vector<int> res;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && a[i]>=st.top()){
            st.pop();
        }
        if(st.empty())
            res.push_back(-1);
        else
            res.push_back(st.top());
        st.push(a[i]);
    }
    for(int i=res.size()-1;i>=0;i--)
        cout<<res[i]<<" ";
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
