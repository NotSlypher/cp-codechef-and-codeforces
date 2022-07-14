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
		ll n, cnt = 0;
		vi holidays;
		cin >> n;
		seev(holidays, n);
		for (auto holiday : holidays)
		{
			if (holiday % 7 == 0 || (holiday+1) % 7 == 0)
				cnt++;
		}
		cout << 8 + n - cnt << endl;
	}
	return 0;
}
