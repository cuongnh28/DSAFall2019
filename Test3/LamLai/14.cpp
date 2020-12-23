#include<bits/stdc++.h>
using namespace std;
map<long long, bool> dd;
vector<int> a;
int c[20];
long long res,n;
int m;
void Try(int i, int m){
    for(int j=0;j<=1;j++){
        c[i]=j;
        if(i==m-1){
            long long ans=0;
            for(int l=0;l<m;l++){
                if(c[l]==1) ans=ans*10+a[l];
            }
            if(dd[ans] && res<ans)
                res=ans;
        }
        else    Try(i+1,m);
    }
}
int main(){
	int t;  cin>>t;
	for(int i=1;i<=1000000;i++){
        dd[i*i*i]=true;
	}
	dd[0]=false;
	while(t--){
        a.clear();
        res=-1;
        cin>>n;
		while(n>0){
            a.push_back(n%10);
            n/=10;
		}
		reverse(a.begin(),a.end());
		m=a.size();
		Try(0,m);
		cout<<res<<endl;
	}
	return 0;
}

