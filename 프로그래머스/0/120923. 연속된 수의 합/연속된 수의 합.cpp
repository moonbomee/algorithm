#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int i=-(num/2);
    int a=total%num;
    int b=total/num;
    if(a==0){
        for(i;i<=num/2;i++){
            answer.push_back(b+i);
        }
    }
    else{
        i++;
        for(i;i<=num/2;i++){
            answer.push_back(b+i);
        }
    }
    return answer;
}