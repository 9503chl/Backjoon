#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{ 
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int sum = 0, a1 = 0,a2 = 0; vector <int> cnt(9,0);
	for (int i = 0; i < 9; i++) {
		cin >> cnt[i]; sum += cnt[i];
	}
	sort(cnt.begin(), cnt.end());
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (sum - cnt[i] - cnt[j] == 100) {
				a1 = cnt[i]; a2 = cnt[j]; break;
			}
		}
	}
	for (int i = 0; i < 9; i++)
		if (cnt[i] != a1 && cnt[i] != a2) cout << cnt[i] << "\n";
}