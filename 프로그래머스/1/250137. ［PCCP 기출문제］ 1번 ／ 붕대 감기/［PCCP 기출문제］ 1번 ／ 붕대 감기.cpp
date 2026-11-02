#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int h = health,a=0,still=0;
    for(int t=1;t<=attacks[attacks.size()-1][0];t++){
        if(attacks[a][0]==t){
            h-=attacks[a][1];
            a++;
            still=0;
            if(h<=0) return -1;
            continue;
        }
        still++;
        h+=bandage[1];
        if(still==bandage[0]){
            still=0;
            h+=bandage[2];
        }
        if(h>health) h=health;
    }
    
    
    return h;
}