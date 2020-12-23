#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
const int N = 1e3 + 5;
int n;
int inoder[N];
int preoder[N];
map <int,int> mp;
int pos_pre;

void PrintPostorder(int start,int end){
    if(start > end) return;
    int pos_in = mp[preoder[pos_pre++]];
    PrintPostorder(start, pos_in - 1);
    PrintPostorder(pos_in + 1, end);
    cout << inoder[pos_in] << ' ';
}
void solve(){
    cin >> n;
    mp.clear();
    pos_pre = 0;
    for(int i = 0 ; i < n ; i++)  cin >> inoder[i],mp[inoder[i]] = i;
    for(int i = 0 ; i < n ; i++)  cin >> preoder[i];
    PrintPostorder(0,n -1);
    cout << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
