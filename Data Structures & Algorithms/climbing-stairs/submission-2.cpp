class Solution {
public:
    // distinct nunber of ways
    // step(n) = step(n-1) + step (n-2)
    // both ways easy ill do bottom up
    // reccurences
    // 
    int climbStairs(int n) {
        vector<int> stepc(n);
        stepc[0] = 1;
        stepc[1] = 2;
        for (int i = 2; i < n; i++) {
            stepc[i] = stepc[i-1] + stepc[i-2];
        }
        return stepc[n-1];
    }
};
