#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string k;
		cin >> k;
		int m = k.size();
		string s;
		cin >> s;
		int n = s.size();
		map<char, int> mp;
		// using a map, store the corresponding position of every letter
		for (int i = 0; i < m; i++) {
			mp[k[i]] = i + 1;
		}
		// get the sum of the distance of every adjacent letters (difference)
		int ans = 0;
		for (int i = 0; i + 1 < n; i++) {
			ans += (abs(mp[s[i]] - mp[s[i + 1]]));
		}
		cout << ans << '\n';
	}
	return 0;
}
