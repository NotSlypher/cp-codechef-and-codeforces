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
	int t;
	cin >> t;
	while (t--)
	{
		ll x;
		cin >> x;
		vi types;
		vin(types, 3);
		sort(all(types));
		cout << (x - 1) * types[0] + types[1] << endl;
	}
	return 0;
}
