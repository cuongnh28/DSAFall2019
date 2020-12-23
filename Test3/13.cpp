#include<bits/stdc++.h>
using namespace std;
struct TanXuat{
	char kytu;
	int solan;
};
int Search(char c, int m, TanXuat x[]){
	for(int i=0;i<=m;i++)
		if(x[i].kytu==c)	return i;
	return m+1;
}
int LietKe(char s[], int m, TanXuat x[]){
	int n=strlen(s);
	for(int i=0;i<n;i++){
		int vt=Search(s[i],m,x);
		if(vt<=m)	x[vt].solan++;
		else{
			m=vt;
			x[vt].solan=1;
			x[vt].kytu=s[i];
		}
	}
	return m;
}
void Sort(TanXuat x[], int l, int r){
	int i=l,j=r,p=x[(i+j)/2].solan;
	if(l>=r)	return;
	do{
		while(x[i].solan>p)	i++;
		while(x[j].solan<p)	j--;
		if(i<=j){
			TanXuat t=x[i];
			x[i]=x[j];
			x[j]=t;
			i++;
			j--;
		}
	}while(i<j);
	Sort(x,l,j);
	Sort(x,i,r);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[10001],res[10001];
		TanXuat x[10001];
		bool chuaxet[10001]={false},check=true;
		int d;
		cin>>d;
		cin>>s;
		int n=strlen(s),m=-1;
		m=LietKe(s,m,x);
		Sort(x,0,m);
	//	for(int i=0;i<=m;i++){
	//		cout<<x[i].kytu<<": "<<x[i].solan<<endl;
	//	}
		for(int i=0;i<=m;i++){
			int t=0,k=x[i].solan;
			if(chuaxet[t])	t++;
			for(int j=0;j<k;j++){
				if(t+j*d>=n)	{
					check=false;
					break;
				}
				else{
					//res[t+j*d]=x[i].kytu;
					chuaxet[t+j*d]=true;	
				}
			}
		}
		if(!check)	cout<<-1<<endl;
		else	cout<<1<<endl;
		}
	return 0;
}
