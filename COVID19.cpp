#include<bits/stdc++.h>

#define l long long
using namespace std;

void work()
{
	int n,cnt=0,mini=INT_MAX,maxx=INT_MIN;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		cnt=0;
		for(int j=i;j>0;j--)
		{
			if(a[j]-a[j-1]<=2) cnt++;
			else break;
		}
		for(int j=i;j<n-1;j++)
		{
			if(a[j+1]-a[j]<=2) cnt++;
			else break;
		}
		cnt++;
		mini=min(mini,cnt);
		maxx=max(maxx,cnt);
	}
	cout<<mini<<" "<<maxx<<endl;
}

int main()
{
	l t;
	cin>>t;
	while(t--)
	{
		work();
	}
	
}
