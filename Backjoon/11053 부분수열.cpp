#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, max1 = 0; cin >> N; vector <int> arr(N, 0);
	vector <int> dp(N, 1);
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 1; i < N; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	for (int i = 0; i < N; i++)
		if (max1 < dp[i]) max1 = dp[i];
	cout << max1;
}