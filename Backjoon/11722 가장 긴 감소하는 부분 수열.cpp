#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, max1 = 0; cin >> N; vector <int> arr(N+1, 0);
	vector <int> dp(N+1, 1);
	for (int i = 1; i <= N; i++) cin >> arr[i];
	for (int i = N - 1; i >= 1; i--) { //현재항
		for (int j = i + 1; j <= N; j++) { //비교항
			if (arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	for (int i = 1; i <= N; i++)
		if (max1 < dp[i]) max1 = dp[i];
	cout << max1;
}