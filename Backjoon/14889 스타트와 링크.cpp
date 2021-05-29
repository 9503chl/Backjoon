#include <iostream>
#include <vector>

using namespace std;
int team[20][20] = { {0,0}, };
int min1 = 101;
int cnt1 = 0, cnt2 = 0;
void Bt(int n, int num) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (num < n / 2) {
				cnt1 += team[i][j] + team[j][i];
				Bt(n, num++);
			}
			else if (n / 2 <= num < n) {
				cnt2 += team[i][j] + team[j][i];
				Bt(n, num++);
			}
			else min1 = min(min1,min(cnt1, cnt2));
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) cin >> team[i][j];
	}
	Bt(N,0);
	cout << min1;
}