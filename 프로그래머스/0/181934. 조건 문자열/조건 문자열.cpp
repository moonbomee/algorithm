#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    return ((ineq==">"&&n>m)||ineq=="<"&&n<m)?1:((eq=="="&&n==m)?1:0);
}