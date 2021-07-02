#include <string> 
#include <vector> 
#include <iostream> 
using namespace std; 
int answer=0; int num = 0; 
void Bf(int count, int cur_num, vector<int> &numbers){ //새로 참조할땐 엔퍼센쓰자
    if(count==size(numbers)) {
        if(cur_num==num) 
            answer++; 
        return;
    } 
    int cnt_num1 = cur_num + numbers[count];
    int cnt_num2 = cur_num - numbers[count];
    Bf(count+1 ,cnt_num1 ,numbers); 
    Bf(count+1 ,cnt_num2 ,numbers); 
} 

int solution(vector<int> numbers, int target) { 
    num=target;
    Bf(0,0,numbers); 
    return answer; 
}

int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;
    
}