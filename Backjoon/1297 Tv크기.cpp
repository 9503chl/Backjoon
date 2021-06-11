#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	double a, b, c,d; cin >> a >> b >> c;
	d = sqrt(pow(b, 2) + pow(c, 2));
	a/=d;
	cout << (int)(b * a) << " " << (int)(c * a); 
}