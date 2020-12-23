#include<bits/stdc++.h>
using namespace std;
void LietKe(string str) {
    int n = str.size();
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
        freq[str[i] - 'A']++;
    for (int i = 0; i < n; i++) {
        if (freq[str[i] - 'A'] != 0) {
            cout << str[i] <<": "<< freq[str[i] - 'A'] <<endl;
            freq[str[i] - 'A'] = 0;
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		LietKe(str);
	}
	return 0;
}
