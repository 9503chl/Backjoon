#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, max1 = 0, z=0; cin >> N; vector <int> arr(N+1, 0);
	vector <int> dp1(N + 1, 1); vector <int> dp2(N + 1, 1);
	for (int i = 1; i <= N; i++) cin >> arr[i];
	for (int i = 1; i <= N; i++) {
		for (int j = i - 1; j >= 1; j--) {
			if (arr[i] > arr[j]) dp1[i] = max(dp1[i], dp1[j] + 1);
		}
	}
	for (int i = N - 1; i >= 1; i--) { 
		for (int j = i + 1; j <= N; j++) { 
			if (arr[i] > arr[j]) dp2[i] = max(dp2[i], dp2[j] + 1);
		}
	}
	for (int i = 1; i <= N; i++)
		if (max1 < dp1[i] + dp2[i] - 1) max1 = dp1[i] + dp2[i] - 1;
	cout << max1;
}