#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector <bool> but(10, true);
int check(int a) {
	if (a == 0) {
		if (!but[0]) return 0;
		else return 1;
	}
	int len = 0;
	while (a > 0) {
		if (!but[a % 10]) return 0;
		a /= 10;
		len++;
	}
	return len;
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, M, rst = 0; cin >> N >> M;
	for (int i = 0; i < M; i++) { 
		int num; cin >> num;
		but[num] = false;
	}
	rst = abs(N - 100);
	for (int i = 0; i <= 1000000; i++) {
		int b = i;
		int len = check(b);
		if (len > 0) {
			int cnt = abs(b - N);
			if (rst > cnt + len) rst = cnt + len;
		}
	}
	cout << rst << "\n";
}