#include <bits/stdc++.h>

using namespace std;
bool a(vector<int> w, vector<int>&b ,int &answer){
    if(max(w[0],w[1])<max(b[0],b[1])||min(w[0],w[1])<min(b[0],b[1])){
        answer++;
        *max_element(b.begin(),b.end())=*max_element(b.begin(),b.end())/2;
        a(w,b,answer);
    }
    return 1;
}

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    a(wallet,bill,answer);
    return answer;
}