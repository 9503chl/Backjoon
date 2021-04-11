#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int E, S, M,cnt=1; cin >> E >> S >> M;
	int a = 1, b = 1, c = 1;
	while (1) {
		if (a == 16) a = 1;
		if (b == 29) b = 1;
		if (c == 20) c = 1;
		if (a == E && b == S && c == M) {
			cout << cnt; break;
		}
		a++; b++; c++;
		cnt++;
	}
}