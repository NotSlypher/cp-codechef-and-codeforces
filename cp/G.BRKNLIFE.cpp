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
	for (int test = 1; test <= t; ++test)
	{
		ll n, m;
		bool ans = false;
		string s, a;
		cin >> n >> m >> s >> a;
        for (char i = 'a'; i < 'f'; i++) {
            int cnt = 0;
            string s1(s.size(), 0);
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '?')
	                s1[j] = i;
                else
	                s1[j] = s[j];
                if (s1[j] == a[cnt] && cnt < m)
	                cnt++;
            }
            if (cnt != m) {
                cout << s1 << endl;
                ans = true;
                break;
            }
        }
        if (!ans)
            cout << -1 << endl;
    }
	return 0;
}
