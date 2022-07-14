#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vin(v,n)     for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
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
		ll n, s = 0;
		cin >> n;
		vector<long long> arr(n), a, b;
		for (auto& X : arr) cin >> X;
		for (int i = 0; i < n; i++) {
			if (i & 1) a.push_back(abs(arr[i]));
			else b.push_back(abs(arr[i]));
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (a[a.size() - 1] > b[0])
			swap(a[a.size() - 1], b[0]);
		for (auto x : b) s += x;
		for (auto x : a) s -= x;
		cout << s << endl;
	}
	return 0;
}
