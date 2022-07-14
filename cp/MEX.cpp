#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define seev(v,n)     for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k, mex = 0;
		vi s;
		cin >> n >> k;
		seev(s, n)
		sort(all(s));
		for (int i = 0; i < n;)
		{
			if (s[i] == mex)
			{
				i++;
				mex++;
			}
			else {
				if (s[i] == mex - 1)
					i++;
				else if (k > 0)
				{
					k--;
					mex++;
				}
				else if (k <= 0)
					break;
			}
		}
		if (k > 0)
			mex += k;
		cout << mex << endl;
	}
	return 0;
}
