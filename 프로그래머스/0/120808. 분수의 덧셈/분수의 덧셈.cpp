#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}


vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer3=numer1*denom2+numer2*denom1, denom3=denom1*denom2;
    int max=denom3, min=numer3,d;
    if(numer3>denom3){
        max=numer3;
        min=denom3;
    }
    d=gcd(max,min);
    
    answer.push_back(numer3/d);
    answer.push_back(denom3/d);
    return answer;
}