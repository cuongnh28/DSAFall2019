#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    stack<int> st;
    int s[n+5];
    st.push(0);
    s[0]=1;
    for(int i=1;i<n;i++){
        while( !st.empty() && a[st.top()]<=a[i] ){
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


