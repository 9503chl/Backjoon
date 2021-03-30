#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, rst; cin >> N; vector <int> dp(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		rst = 1 + dp[i - 1];
		for (int j = 1; j * j <= i; j++) {
			rst = min(rst, 1 + dp[i - (j * j)]);
		}
		dp[i] = rst;
	}
	cout << dp[N];
}