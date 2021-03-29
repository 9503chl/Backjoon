#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int A, B, m, rst = 0;
	stack <int> stk;
	cin >> A >> B;
	cin >> m;
	for (int i = m; i > 0; i--) {
		int x; cin >> x;
		rst += x * pow(A, i - 1);
	}
	while (rst != 0) {
		stk.push(rst % B);
		m--; rst /= B;
	}
	while (!stk.empty()) {
		cout << stk.top() << " ";
		stk.pop();
	}
}