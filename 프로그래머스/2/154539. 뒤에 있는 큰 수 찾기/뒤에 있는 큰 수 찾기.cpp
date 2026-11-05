#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(),-1),b=numbers,c;
    int a=-1,k=-1,m=-1;
    sort(b.begin(),b.end());
    c=b;
    c.erase(unique(c.begin(),c.end()),c.end());
    for(int i=0;i<numbers.size()-1;++i){
        a=numbers[i];
        if(a==b.back()) {
            b.pop_back();
            continue;
        }
        if(i){
            if(a==numbers[i-1]){
                answer[i]=answer[i-1];
                continue;
            }
            if(a>=m){
                for(int j=k;j<numbers.size();++j){
                    if(a<numbers[j]) {
                        answer[i]=numbers[j];
                        m=a,k=j;
                        break;
                    }
                }
            }
            if(a==c[c.size()-2]) {
                answer[i]=b.back();
                continue;
            }
            
        }
        for(int j=i+1;j<numbers.size();++j){
            if(a<numbers[j]) {
                answer[i]=numbers[j];
                break;
            }
        }
    }
    return answer;
}