#include <iostream>
#include <vector>

using namespace std;
int team[20][20] = { {0,0}, };
int min1 = 101;
vector <int> rst;
vector <bool> yes;
int cnt1 = 0, cnt2 = 0;
void cnt_sum(int n) { // 12  34
	for (int i = 0; i < n / 2; i++) {
		for (int j = i + 1; j < n / 2; j++) {
			cnt1 += team[rst[i]][rst[j]] + team[rst[j]][rst[i]];
		}
	}
	for (int i = n / 2; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			cnt2 += team[rst[i]][rst[j]] + team[rst[j]][rst[i]];
		}
	}
}
void Bt(int n, int num) {
	for (int i = 0; i < n; i++) { //01 23 
		if (num < n) {
			if (!yes[i]) {
				rst[num] = i;
				yes[i] = true;
				Bt(n, num+1);
				yes[i] = false;
			}
			else continue;
		}
		else {
			cnt_sum(n); min1 = min(min1, abs(cnt1 - cnt2));
			break;
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N; rst.resize(N,0), yes.resize(N, false);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) cin >> team[i][j];
	}
	Bt(N,0);
	cout << min1;
}