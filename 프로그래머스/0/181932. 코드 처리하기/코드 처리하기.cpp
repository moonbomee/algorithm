#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode=0;
    for(int i=0;i<code.length();++i){
        if(code[i]=='1') {
            mode=(mode+1)%2;
            continue;
        }
        if(!((i+mode)%2)) ret+=code[i];
    }
    return ret.empty()?"EMPTY":ret;
}