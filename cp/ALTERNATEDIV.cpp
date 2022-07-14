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
		ll n;
		cin >> n;
		int a[100000];
		int val = 1;
		if (n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		for (int i = 0; i < n - 1; i += 2)
		{
			a[i] = val;
			a[i + 1] = 2 * val;
			val += 2;
		}
		if (n % 2 != 0)
		{
			a[n - 1] = a[n - 2] + 1;
		}
		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";

	}
	return 0;
}