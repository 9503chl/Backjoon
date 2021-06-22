#include <iostream> 
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	int A, B, C, D, E, F,rst = 0;
	cin >> A >> B >> C >> D >> E >> F;
	rst = max(A + B + C, max(A + B + D,max(A+C+D, B + C + D)));
	cout << rst + max(E, F);
}