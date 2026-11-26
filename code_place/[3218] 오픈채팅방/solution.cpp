#include <bits/stdc++.h>
using namespace std;


vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string,string> name;
    string a1,a2,a3;
    for(string s:record){
        stringstream ss(s);
        ss>>a1;
        if(a1!="Leave"){
            ss>>a2>>a3;
            name[a2]=a3;
        }   
    }
    for(string s:record){
        stringstream ss(s);
        ss>>a1>>a2;
        if(a1=="Enter") answer.push_back(name[a2]+"님이 들어왔습니다.");
        if(a1=="Leave") answer.push_back(name[a2]+"님이 나갔습니다.");
    }
    
    
    return answer;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string line;
    getline(cin, line); 
    vector<string> record;
    stringstream ss(line);
    string item;
    while (getline(ss, item, ',')) record.push_back(item);
    vector<string> answer = solution(record);
    for (const string& s : answer) cout << s << '\n';
}