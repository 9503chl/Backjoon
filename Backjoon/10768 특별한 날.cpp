#include <iostream> 
#include <vector> 
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	int M,D; cin >> M >> D;
	if (M < 2) cout << "Before";
	else if (M<=2 && D<18) cout << "Before";
	else if (M == 2 && D == 18) cout << "Special";
	else cout << "After";
}