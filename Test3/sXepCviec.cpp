#include<bits/stdc++.h>
using namespace std;
void Sort(int s[], int f[], int l, int r)
{
	int i=l,j=r,
		p=f[r];
	if(l>=r)	return;
	do
	{
		while(p>f[i])	i++;
		while(p<f[j])	j--;
		if(i<=j)
		{
			swap(s[i],s[j]);
			swap(f[i],f[j]);
			i++;
			j--;
		}
	}while(i<j);
	Sort(s,f,i,r);
	Sort(s,f,l,j);
}
int main()
{
	int n,f[100000],s[100000];
	bool XOPT[100000];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>f[i];
		XOPT[i]=false;
	}
	Sort(s,f,1,n);
	int i=1;
	XOPT[i]=true;
	for(int j=2;j<=n;j++)
	{
		if(s[j]>=f[i])
		{
			XOPT[j]=true;
			i=j;
		}
	}
	for(int i=1;i<=n;i++){
		if(XOPT[i])
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
