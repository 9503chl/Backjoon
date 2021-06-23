#include <iostream> 
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	long long A, B, C,rst=0; cin >> A >> B >> C;
	if (A % C == 0) rst += A / C;
	else rst += A / C + 1;
	if (B % C == 0) rst *= B / C;
	else rst *= B / C + 1;
	cout << rst;
}