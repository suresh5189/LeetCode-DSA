#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) { 
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        double answer = floor(dividend/divisor);
        return answer;
    }
};