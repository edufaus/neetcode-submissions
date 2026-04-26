class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> steps(cost.size()+1);
        steps[0] = 0;
        steps[1] =  0;
        for (int i = 2; i<steps.size(); i++) {
            steps[i] = min(steps[i-1] + cost[i-1], steps[i-2] + cost[i-2]);
        }
        return steps[steps.size()-1];
    }
};
