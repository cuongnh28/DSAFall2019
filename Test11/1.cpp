#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
const int N = 1e4 + 5;
string s;
struct Node{
    char data;
    Node* left;
    Node* right;
};
Node *TaoNode(char x){
    Node *p = new Node;
    p -> data = x;
    p -> left = p -> right = NULL;
    return p;
}
bool checkKyTu(char c){
    return (c == '+' || c == '-' || c== '*' || c == '/');
}
Node *Tree(string s){
    stack <Node *> st;
    Node *t,*t1,*t2;
    for(int i = 0 ; i < s.length(); i++){
        if(!checkKyTu(s[i])){
            t = TaoNode(s[i]);
            st.push(t);
        }
        else{
            t = TaoNode(s[i]);
            t1 = st.top();st.pop();
            t2 = st.top();st.pop();
            t -> right = t1;
            t -> left = t2;
            st.push(t);
        }
    }
    t = st.top();
    st.pop();
    return t;
}
void inOder(Node *t){
    if(t){
        inOder(t -> left);
        cout << t -> data << ' ';
        inOder(t -> right);
    }
}
void solve(){
    cin >> s;
    Node *t = Tree(s);
    inOder(t);
    cout << '\n';
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
