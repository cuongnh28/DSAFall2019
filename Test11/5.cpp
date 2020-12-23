#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
const int N = 1e5 + 5;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
typedef Node *Tree;

Tree ContructTree(int n){
    map <int,Tree> mp;
    Node *root = NULL;
    while(n--){
        int a,b;
        char c;
        cin >> a >> b >> c;
        Node *cha;
        if(mp.find(a) == mp.end()){
            cha = new Node(a);
            mp[a] = cha;
            if(root == NULL)
                root = cha;
        }
        else cha = mp[a];
        Node *con = new Node(b);
        if(c == 'L') cha -> left = con;
        else if(c == 'R') cha -> right = con;
        mp[b] = con;
    }
    return root;
}
void Lever_Order(Tree root){
    if(root == NULL) return;
    queue <Tree> q;
    q.push(root);
    while(!q.empty()){
        Node *cur = q.front(); q.pop();
        cout << cur->data << ' ';
        if(cur -> left != NULL) q.push(cur -> left);
        if(cur -> right != NULL) q.push(cur -> right);
    }
}
void solve(){
    int n;
    cin >> n;
    Tree root = ContructTree(n);
    Lever_Order(root);
    cout << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
