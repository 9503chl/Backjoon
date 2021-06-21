#include <iostream> 
#include <string> 
#include <locale.h>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	setlocale(LC_ALL, "korean");
	int N; cin >> N;
	N += 44031;
	wprintf(L"%s" , &N);
}