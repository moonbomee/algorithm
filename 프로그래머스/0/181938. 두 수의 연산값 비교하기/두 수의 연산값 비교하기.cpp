#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer1 = 2*a*b;
    int answer2 = stoi(to_string(a)+to_string(b));
    return answer1>answer2 ? answer1:answer2;
}