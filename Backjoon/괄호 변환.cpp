#include <string>
#include <vector>
#include <iostream> 

using namespace std;
bool check(string p) {
    int t{}; //0 초기화 하는 방법
    for (size_t i = 0; i < p.length(); i++) { //size_t는 unsigned longlong 비슷
        if (p[i] == '(') t++;
        else {
            if (!t) return false;
            t--;
        }
    }
    return true;
}

string recursion(string p) {
    if (p == "") return p;
    string u{}, v{};
    int Lcnt{}, Rcnt{};
    for (size_t i = 0; i < p.length(); i++) {
        if (p[i] == '(') Lcnt++;
        else Rcnt++;
        if (Lcnt == Rcnt) {
            u = p.substr(0, i + 1); //자르기
            v = p.substr(i + 1);
            break;
        }
    }
    if (check(u)) return u + recursion(v);
    else {
        string temp{ "(" };
        temp += recursion(v) + ")";
        u = u.substr(1, u.length() - 2);
        for (size_t i = 0; i < u.length(); i++) {
            if (u[i] == '(')    temp += ')';
            else    temp += '(';
        }
        return temp;
    }
}

string solution(string p) {
    if (check(p)) return p;
    return recursion(p);
}

int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;

}