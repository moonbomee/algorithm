#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    long long time=times[0];
    int n=diffs.size();
    vector<pair<int,int>> v; //한번 틀릴때 추가시간
    v.push_back({diffs[0],times[0]});
    for(int i=1;i<n;++i){
        v.push_back({diffs[i],times[i-1]+times[i]});
        time+=times[i];
    }
    sort(v.begin(),v.end()); //난이도로 정렬
    int i=n-1;
    long long all_time=time;
    int answer=1;
    time=0;
    for(int level=v[n-1].first;level>0;--level){
        while(i>-1&&v[i].first>level) {
            time+=v[i].second;
            i--;
        }
        all_time+=time;
        if(all_time>=limit){
            all_time>limit ? answer=level+1 : answer=level;
            break;
        }
    }
        
    
    return answer;
}

/*    for(int i=level;i>-1;i--){
        if(diffs[0]>i){
                time+=(diffs[0]-i)*(times[0])+times[0];
            } else time+=times[0];
        for(int j=1;j>diffs.size();j++){
            if(diffs[j]>i){
                time+=(diffs[j]-i)*(times[j]+times[j-1])+times[j];
            } else time+=times[j];
        }
        time=0;
        
int addmin(vector<int> &d,vector<int> &times, int &level,int &time){
    if(d[0]>level){
                time+=(d[0]-level)*(times[0]);
            }
    for(int j=1;j>d.size();j++){
            if(d[j]>level){
                time+=(d[j]-level)*(times[j]+times[j-1]);
            }
        }
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int level = *max_element(diffs.begin(),diffs.end());
    int time=0;
    for(int i:times) time+=i;
    

    return level;
}
    }
    
    
    
    
    
    
    
    
    
    
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int time=times[0],answer=0;
    int n=diffs.size();
    vector<pair<int,int>> v;
    v.push_back({diffs[0],0});
    for(int i=1;i<n;++i){
        v.push_back({diffs[i],times[i-1]});
        time+=times[i];
    }
    answer=time;
    sort(v.begin(),v.end());
    int level = v[n-1].first;
    
    if(){
        for(int i=n-1;i>=-1;--i){
            if(v[i].first<level)
        }
    }
    
    
    
    return answer;
}    
    
    
    
    */