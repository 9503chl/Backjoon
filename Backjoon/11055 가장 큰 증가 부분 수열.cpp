#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N,max1=0; cin >> N; 
	vector <int> dp(N + 1, 0);
	vector <int> cnt(N + 1, 0);
	for (int i = 1; i <= N; i++) cin >> cnt[i];
	for (int i = 1; i <= N; i++) {
		int last = 0;
		dp[i] = cnt[i];
		for (int j = i-1; j > 0; j--) {
			if (cnt[j] < cnt[i]) {
				last = max(last, dp[j]);
			}
		}
		dp[i] += last;
	}
	for (int i = 1; i <= N; i++) 
		if (max1 < dp[i]) max1 = dp[i];
	cout << max1;
}