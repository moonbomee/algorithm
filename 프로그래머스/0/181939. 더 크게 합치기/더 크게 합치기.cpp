#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    int ans1, ans2;
    string a1=to_string(a),b1=to_string(b);
    ans1=stoi(a1+b1),ans2=stoi(b1+a1);
    return ans1>ans2 ? ans1:ans2;
}