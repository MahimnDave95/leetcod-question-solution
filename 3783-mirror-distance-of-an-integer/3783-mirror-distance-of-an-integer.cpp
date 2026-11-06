class Solution {
public:
    int mirrorDistance(int n) {
        int copy = n; //we did this because n is change after running that loop so we need to tkae backup for that n
        int a = 0;
        while(n>0){
            a = a*10 + n%10;
            n/=10;
        }
        return abs(a-copy);
    }
};