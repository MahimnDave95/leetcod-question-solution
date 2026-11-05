class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0, b = 1, c = 1;
        while (a + b + c < n) {
            a = b;
            b = c;
            c = a + b;
        }
         if(a + b + c == n){
            return true;
         };
         return false;
    }
};