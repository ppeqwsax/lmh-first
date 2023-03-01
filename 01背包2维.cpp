#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001],v[1001],w[1001];
int main()
{
	int n,m;
	cin>>m>>n;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j<v[i]) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<dp[n][m]<<endl;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

