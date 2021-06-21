#include <iostream> 

using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	int A, B, C, D; cin >> A >> B;
	cin >> C >> D;
	cout << min(A + D, B + C);
}