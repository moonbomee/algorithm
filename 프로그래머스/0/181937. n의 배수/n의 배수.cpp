#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 1;
    if(num%n){
     answer=0;   
    }
    return answer;
}