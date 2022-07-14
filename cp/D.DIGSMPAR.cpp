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
		string n;
		cin >> n;
		ll cnt = 0;
		for (int i = n.length() - 1; i >= 0; --i)
		{
			if (n[i] == '9')
				cnt++;
			else
				break;
		}
		if (cnt % 2 != 0)
			cout << stoi(n) + 2 << endl;
		else
			cout << stoi(n) + 1 << endl;
	}
	return 0;
}
