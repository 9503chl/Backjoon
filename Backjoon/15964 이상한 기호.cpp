#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	long long A, B; cin >> A >> B;
	cout << (A + B) * (A - B);
}