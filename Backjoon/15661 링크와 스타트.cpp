#include <iostream>
#include <vector>

using namespace std;
int team[20][20] = { {0,0}, };
int min1 = 1234567890;
vector <bool> yes;
int cnt1 = 0, cnt2 = 0;
void Bt(int n, int cnt, int num) {
	vector <int> start,link;
	for (int i = 0; i < n; i++) {
		if (yes[i]) start.push_back(i);
		else link.push_back(i);
	}
	for (int i = 0; i < start.size(); i++) {
		for (int j = i + 1; j < start.size(); j++) {
			int str_x = start[i], str_y = start[j];
			cnt1 += team[str_x][str_y] + team[str_y][str_x];
		}
	}
	for (int i = 0; i < link.size(); i++) {
		for (int j = i + 1; j < link.size(); j++) {
			int lik_x = link[i], lik_y = link[j];
			cnt2 += team[lik_x][lik_y] + team[lik_y][lik_x];
		}
	}
	min1 = min(min1, abs(cnt1 - cnt2));
	cnt1 = 0; cnt2 = 0;
	for (int i = cnt; i < n; i++) { 
		if (!yes[i]) {
			yes[i] = true;
			Bt(n, i, num + 1);
			yes[i] = false;
		}
	}
}
int main()
{
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int N; cin >> N; yes.resize(N, false);
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < N; j++) cin >> team[i][j];
	Bt(N, 0, 0);
	cout << min1;
}