/*
https://codeforces.com/contest/1016/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)

int main () {

	int n, m, q;
	cin >> n >> m >> q;
	string s, t;
	cin >> s >> t;

	int ocur[n];
	rep (i, n)	ocur[i] = 0;
    //cout << s << " " << t << endl;
	rep (i, n - m + 1) {
		int c = 0, itr = i;
		rep (j, m) {
			if (s[itr] == t[j])
				c += 1;
			else
				break;
            itr += 1;
		}
        //cout << i << " " << c << endl;
		if (c == m) {
			ocur[i] = 1;
		}
	}
    // rep (i, n)
    //     cout << ocur[i] << " ";
    // cout << endl;
    
	rep (i, q) {
		int l, r;
		cin >> l >> r;
		int ans = 0;
		for (int le = l - 1; le < r - m + 1; le++) {
			if (ocur[le])
				ans += 1;
		}
		cout << ans << endl;
	}

	return 0;
}