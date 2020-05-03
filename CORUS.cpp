#include <iostream>
#include <bits/stdc++.h>

//DEFINE
#define rep(i, a, b) for (i = a; i < b; i++)
#define itrep(at) for (auto it = at.begin(); it != at.end(); it++)
#define ll long long int
#define ld long double
#define pb push_back
#define w(t) while (t--)
#define booster                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#define mod 1000000007
using namespace std;


int main()
{
	booster;
	ll t;
	cin >> t;
	w(t)
	{
		unordered_map<char, ll> umap;
		vector<ll> v;
		ll n, q, cnt = 0;
		cin >> n >> q;
		string s;
		cin >> s;
		for (char i = 0; i < n; i++)
		{
			umap[s[i]]++;
		}
		for (auto i : umap)
		{
			if (i.second > 1)
			{
				v.pb(i.second);
			}
		}
		/*for (auto i : v)
			cout << i << " ";
		cout << endl;
		*/
		w(q)
		{
			vector<ll>temp(v.size(),0);
			ll c, sum = 0;
			cin >> c;
			for (ll i = 0; i < c; i++)
			{
				for (ll j = 0; j < v.size(); j++)
				{
					if(v[j]!=0) temp[j] = v[j] - 1;
				}
			}
			for (auto i : temp)
				sum += i;
			
			cout<<sum<<endl;
		}
	}
}
