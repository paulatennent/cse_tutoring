/* Wi-fi
https://codeforces.com/problemset/problem/1216/F
Solution by Kevin

Store a set containing the first router within distance k that can still power.
Use this in your dp.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define x first
#define y second
#define pb push_back
#define all(x) x.begin(), x.end()

#define MAXN 200005

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int N, K;
	cin >> N >> K;
	string r;
	cin >> r;

	set<ll> s;
	ll dp[MAXN];
	dp[1] = 1;
	if (r[0]=='1') s.insert(1);
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i-1] + i; // direct
		if (r[i-1]=='1') s.insert(i);

		// check to see if can insert by wifi
		while (!s.empty() && *s.begin()+K < i) s.erase(s.begin());
		// i = 10, k = 5

		// either take direct or
		// min direct in range
		// {6 .. }
		if (!s.empty()) {
			int last = *s.begin() - K - 1;
			ll newdp = *s.begin();
			if (last >= 0) newdp += dp[last];
			dp[i] = min(dp[i], newdp);
		}

		// 
		if (r[i-1]=='1') {
			for (int j = i-1; j >= 0; j--) {
				if (r[j-1] == '1') break;
				dp[j] = min(dp[j], dp[i]);
			}
		}
	}

	// for (int i = 1; i <= N; i++) printf("%lld ", dp[i]); printf("\n");
	printf("%lld\n", dp[N]);
}