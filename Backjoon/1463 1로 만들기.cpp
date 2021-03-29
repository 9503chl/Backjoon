#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b) {
	return a > b ? b : a;
}
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int a = 1, X;
	cin >> X;
	vector <int> arr(X + 1, 0);
	arr[1] = 0;
	for (int i = 2; i <= X; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
	}
	cout << arr[X];
}