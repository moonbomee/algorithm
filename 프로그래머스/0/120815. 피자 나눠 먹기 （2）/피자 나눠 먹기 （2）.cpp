#include <string>
#include <vector>
#include <numeric>

using namespace std;
 
    
int solution(int n) {
    return std::lcm(n,6)/6;
}