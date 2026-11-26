#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    sort(s.begin(),s.end(),greater<char>());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    while (!s.empty() && (s.back() == '\r' || s.back() == ' ')) s.pop_back();

    cout << solution(s) << '\n';
    return 0;
}