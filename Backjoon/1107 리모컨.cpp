#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
//이방법말고 전부탐색하느 방법을 찾아보자 아직 몾찾았따
int N, M; vector <int> but(10, true);
int min1 = 0, length = 0, cnt = 0, rst = 0, cntB = 0;
void check(int a) {
	a %= 10;
	for (int i = 0; i < 10; i++)
		if (but[i] == true) {
			min1 = abs(a - i); break; //시작
		}
	for (int i = 0; i < 10; i++)
		if (but[i] == true) min1 = min(min1, abs(a - i));
	for (int i = 0; i < 10; i++) {
		if (abs(a - i) == min1 && but[i] == true) {
			cnt = i; break; //인덱스찾기
		}
	}
	cntB++;
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	cin >> N >> M;
	for (int i = 0; i < M; i++) { //123456
		int num; cin >> num;
		but[num] = false;
	}
	if (N == 100) cout << 0;
	else {
		int x = N;
		while (x / 10) {
			x /= 10;
			length += 1;
		}
		for (int i = length; i >= 0; i--) {
			check(N / pow(10, i));
			rst += (cnt * pow(10, i));
		}
		cout << min(abs(N - rst) + cntB, abs(N - 100));
	}
}