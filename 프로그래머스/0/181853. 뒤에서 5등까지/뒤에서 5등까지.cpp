#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int a=0;
    for(int j=num_list.size()-1;j>0;j--){
        for(int i=0;i<j;i++){
            if(num_list[i]>num_list[i+1]){
                a=num_list[i];
                num_list[i]=num_list[i+1];
                num_list[i+1]=a;
            }
        }
    }
    vector<int> answer;
    for(int i=0;i<5;i++){
        answer.push_back(num_list[i]);
    }
    return answer;
}