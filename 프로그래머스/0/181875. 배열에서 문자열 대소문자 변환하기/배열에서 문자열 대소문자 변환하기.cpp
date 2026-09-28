#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    int i=0;
    for(string &str:strArr){
        if(i==0){
            transform(str.begin(),str.end(),str.begin(),[](char c){return tolower(c);});
            i++;
        }
        else {
            transform(str.begin(),str.end(),str.begin(),[](char c){return toupper(c);});
            i--;
        }
    }
    return strArr;
}