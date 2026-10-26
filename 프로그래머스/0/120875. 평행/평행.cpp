#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    for(int i = 0; i < 3; ++i){
        int slope1 = (dots[3][0] - dots[i][0]) * (dots[(i+1)%3][1] - dots[(i+2)%3][1]),
            slope2 = (dots[3][1] - dots[i][1]) * (dots[(i+1)%3][0] - dots[(i+2)%3][0]);
        
        if (slope1 == slope2)
            return 1;
    }
    return 0;
}