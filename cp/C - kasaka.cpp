#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vii vector<int><int>

string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes\n";
    }
    // Otherwise
    else {
        // return "No"
        return "No\n";
    }
}

int main()
{
    string s;
    cin >> s;
    unsigned ll l = s.length();
    unsigned ll found = s.find_last_not_of('a');
    unsigned ll foundsub = s.find_first_not_of('a');
    string add, sub;
    for (unsigned ll i = 0; i < l - found - 1; ++i)
    {
        add.push_back('a');
    }
    s.insert(0, add);
    s.erase(0, foundsub);
    if(foundsub <= l - found -1)
		cout << isPalindrome(s);

    else
    {
        cout << "No\n";
    }
	return 0;
}
