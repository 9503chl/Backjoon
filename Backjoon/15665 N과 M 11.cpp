#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int xy[10001] = { false, };
int Array[8], rst[8] = { 0, };
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
	int N, M,a=0; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		if (!xy[num]) {
			Array[a] = num; a++;
			xy[num] = true;
		}
	}
	sort(Array, Array + a);
	Bt(a, M, 0);
}