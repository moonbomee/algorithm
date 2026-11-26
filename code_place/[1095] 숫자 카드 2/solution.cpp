#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> cards, vector<int> queries) {
    vector<int> answer;
    unordered_map<int,int> m;
    int a;
    for(int i:cards){
        m[i]++;
    }
    for(int i:queries){
        answer.push_back(m[i]);
    }
    return answer;
}


vector<int> readLine() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> v;
    int x;
    while (ss >> x) v.push_back(x);
    return v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    readLine();
    vector<int> cards = readLine();
    readLine();
    vector<int> queries = readLine();

    vector<int> answer = solution(cards, queries);
    for (int i = 0; i < (int)answer.size(); i++) {
        if (i) cout << ' ';
        cout << answer[i];
    }
    cout << '\n';
    return 0;
}