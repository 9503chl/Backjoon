#include <iostream> 
#include <algorithm>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	int A, B, C, D; cin >> A >> B >> C >> D;
	cout << min(abs((A + B) - (C + D)), min(abs((A + C) - (B + D)), abs((A + D) - (B + C))));
}