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
			ll n;
			cin >> n;
			set<int> a;
			for (int i = 0; i < n; ++i)
			{
				ll temp;
				cin >> temp;
				a.insert(temp);
			}
			cout << 2 << endl << a.size();
		}
		return 0;
	}
