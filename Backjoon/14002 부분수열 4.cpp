#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, x = 1, max1 = 0; cin >> N; vector <int> arr(N, 0);
	vector <int> dp(N, 1);
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 1; i < N; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	for (int i = 0; i < N; i++)
		if (max1 < dp[i]) max1 = dp[i];
	cout << max1 << "\n";
	x = max1; stack <int> rst;
	for (int i = N - 1; i >= 0; i--) {
		if (dp[i] == x && x > 0) {
			rst.push(arr[i]); x--;
		}
	}
	while (!rst.empty()) {
		cout << rst.top() << " "; rst.pop();
	}
}