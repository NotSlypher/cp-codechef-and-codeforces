#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vin(v,n)     for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	while (t--)
	{
		ll n, m, f, p, a[100000];
		string s;
		cin >> n >> m;
		map<ll, ll> sp;
		map<ll, string> posts;
		vll spe, norm;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sp[a[i]] = -1;
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> f >> p >> s;
			if (sp[f] != -1)
				norm.push_back(p);
			else
				spe.push_back(p);
			posts[p] = s;
		}
		sort(all(spe));
		sort(all(norm));
		for (int i = spe.size() - 1; i >= 0; i--)
			cout << posts[spe[i]] << endl;
		for (int i = norm.size() - 1; i >= 0; i--)
			cout << posts[norm[i]] << endl;
	}
	return 0;
}
