#include<bits/stdc++.h>
using namespace std;
int s,d;
void Solve(){
    stack<int> st;
    while(s>0){
        d--;
        if(s>9){
            st.push(9);
            s-=9;
        }
        else{
            st.push(s);
            break;
        }
    }
    if(d<0) cout<<-1;
    else{
        if(d>0){
        int tmp=st.top();   st.pop();
        st.push(tmp-1); d--;
        while(d>1){
            st.push(0);
            d--;
        }
        st.push(1);
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
    cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s>>d;
		Solve();
	}
	return 0;
}

