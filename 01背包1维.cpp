#include<bits/stdc++.h>
using namespace std;
int dp[1001],w[1001],c[1001];
int main()
{
	int n,m;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=1;j--)
		{
			if(j>=w[i])
				dp[j]=max(dp[j],dp[j-w[i]]+c[i]);
		}
		for(int j=1;j<=m;j++)
		{
			cout<<dp[j]<<" ";
		}
		cout<<endl;
	}
	cout<<dp[m];
	return 0;
}

