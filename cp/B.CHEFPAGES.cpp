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
	int t = 1;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		if (a && b)
			cout << "https://discuss.codechef.com";
		else if (!a)
			cout << "https://www.codechef.com/practice";
		else
			cout << "https://www.codechef.com/contests";
	}
	return 0;
}
