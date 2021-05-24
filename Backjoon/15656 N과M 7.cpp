#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Array[8], rst[8] = { 0, };
bool yes[8] = { false, }; //false가 방문 안한것
void Bt(int n, int m, int cnt) {
	for (int i = 0; i < n; i++) {
		if (cnt < m) {
			rst[cnt] = Array[i];
			Bt(n, m, cnt + 1);
		}
		else {
			for (int j = 0; j < m; j++) cout << rst[j] << " ";
			cout << "\n"; cnt--; rst[cnt] = 0; break;
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> Array[i];
	sort(Array, Array + N);
	Bt(N, M, 0);
}