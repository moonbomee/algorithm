#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    n=(n+1)/2;
    for (int i=0;i<n;i++){
        answer.push_back(1+2*i);
    }
    return answer;
}