#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int a=0;
    for(int j=num_list.size()-1;j>num_list.size()-6;j--){
        for(int i=0;i<j;i++){
            if(num_list[i]<num_list[i+1]){
                a=num_list[i];
                num_list[i]=num_list[i+1];
                num_list[i+1]=a;
            }
        }
    }
    vector<int> answer;
    for(int i=1;i<6;i++){
        answer.push_back(num_list[num_list.size()-i]);
    }
    return answer;
}