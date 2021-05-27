#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, max1 = 0; cin >> N;
	vector <int> dp(N + 1, 0),rst(N+1,0), day(N + 1, 0);
	for (int i = 1; i <= N; i++) cin >> dp[i] >> day[i];
	for (int i = 1; i <= N; i++) {
		if (i + day[i] < N) {
			rst[i+day[i]] = rst[i] + max(rst[i+day[i]], dp[i]);
		}
	}
	for (int i = 1; i <= N; i++) max1 = max(max1, rst[i]);
	cout << max1;
}