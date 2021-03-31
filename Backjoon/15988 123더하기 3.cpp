#include <iostream>
#include <vector>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	long long max = 0, T, n;
	vector <int> rst;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n; rst.push_back(n);
		if (max < n) max = n;
	}
	vector <long long > dp(max + 1, 0);
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	if (max == 1) cout << 1;
	else if (max == 2) cout << 2;
	else if (max == 3) cout << 4;
	else {
		for (int i = 4; i <= max; i++) dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009;
		for (int i = 0; i < T; i++) {
			cout << dp[rst[i]] % 1000000009 << "\n";
		}
	}
}