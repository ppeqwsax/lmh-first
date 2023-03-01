#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	int f=0,ans=0;
	cin>>x>>s;
	while(1)
	{
		for(int j=0;j<x.size();j++)
		{
			f=0;
			for(int k=0;k<s.size();k++)
			{
				if(s[k]!=x[j])
				{
					if(s[k]=='2'&&x[j]=='5') s[k]+=3;
					if(s[k]=='5'&&x[j]=='2') s[k]-=3;
					if(s[k]=='6'&&x[j]=='9') s[k]+=3;
					if(s[k]=='9'&&x[j]=='6') s[k]-=3;
				}
				if(s[k]==x[j])
				{
					s[k]=-1;
					f=1;
					break;
				}
			}
			if(f==0)
			{
				cout<<ans;
				return 0;
			}
		}
		ans++;
	}
	return 0;
}
