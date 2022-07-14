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
		int d;
		cin >> d;
		bool b = false;
		char n[1000];
		for (int i = 0; i < d; i++) {
			cin >> n[i];
			if (n[i] == '0' || n[i] == '5')
				b = true;
		}
		if (b == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
