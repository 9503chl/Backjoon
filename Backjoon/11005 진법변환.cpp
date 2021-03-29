#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int num, jin; stack <int> stk;
	cin >> num >> jin;
	while (num != 0) {
		stk.push(num % jin);
		num /= jin;
	}
	while (!stk.empty()) {
		if (stk.top() > 9) {
			cout << (char)('A' + stk.top() - 10); stk.pop();
		}
		else {
			cout << stk.top(); stk.pop();
		}
	}
}