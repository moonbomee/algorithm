#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer="";
    for(char str:rny_string){
        if(str=='m') answer += "rn";
        else answer += str;
    }
    
    return answer;
}

/*string solution(string rny_string) {
    vector<char> insert_str;
    for(char str:rny_string){
        if(str=='m'){
            insert_str.push_back('r');
            insert_str.push_back('n');
        }
        else {
            insert_str.push_back(str);
            }
    }
    
    string answer(insert_str.begin(),insert_str.end());

    return answer;
} */