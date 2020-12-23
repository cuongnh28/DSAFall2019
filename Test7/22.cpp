#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+5],res=-1,S; //a la h, cho de code thoi.
        for(int i=0;i<n;i++)
            cin>>a[i];
        stack<int> st;
        int i;
        for(i=0;i<n;){
            //neu stack rong hoac a[top] <= a[i] thi them i vao stack.
            if( st.empty() || (a[st.top()] <= a[i]) )
                st.push(i++);
            //nguoc lai.
            else{
                int y=st.top();
                st.pop();
                if(st.empty()){
                    S=a[y]*i;
                }
                else{
                    S=a[y]*(i-1-st.top());
                }
                if(res<S){
                    res=S;
                }
            }
        }
        while(!st.empty()){
            int y=st.top();
            st.pop();
            if(st.empty()){
                S=a[y]*i;
            }
            else{
                S=a[y]*(i-1-st.top());
            }
            if(res<S){
                    res=S;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
