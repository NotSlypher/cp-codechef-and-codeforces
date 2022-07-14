#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define seev(v,n)     for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define vll vector<ll>
#define all(xx)       xx.begin(), xx.end()

void MAGNETSORT()
{
    int n, ct = 0;
    cin >> n;
    vi a;
    seev(a, n);
    string s;
    cin >> s;
    if (is_sorted(all(a))) {
        cout << 0 << endl;
        return;
    }
    for (auto x : s) if (x == 'N') 
        ct++;
    if (ct == n || ct == 0) {
        cout << -1 << endl;
        return;
    }
    vi b = a;
    sort(all(a));
    int start = INT_MAX, last = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            start = min(i, start);
            last = max(last, i);
        }
    }

    bool f1 = false, f2 = false;
    for (int i = 0; i < start; i++) 
        if (s[i] != s[last]) 
            f1 = true;
    for (int i = last; i < n; i++) 
        if (s[i] != s[start]) 
            f2 = true;
    if (s[start] != s[last] || f1 || f2)
        cout << 1;

    else
        cout << 2;
    cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
        MAGNETSORT();
	}
	return 0;
}

