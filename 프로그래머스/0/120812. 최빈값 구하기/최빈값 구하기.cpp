#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int max = 0, temp=-1;
    sort(array.begin(),array.end());
    int i=0;
    while(1){
        auto a=find(array.rbegin(),array.rend()-i,array[i]);
        if(a==array.rend()-i) break;
        int b=array.size()-(a - array.rbegin())-i;
        if(max==b) temp=-1;
        if(max<b) {
            max=b;
            temp=array[i];
        }
        
        i+=b;
    }
    
    return temp==-1 ?-1:temp;
}