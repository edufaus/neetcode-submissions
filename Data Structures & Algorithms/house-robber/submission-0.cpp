class Solution {
public:
    // m(h) = max(nums(h) + m(h-2), m(h-1));
    int rob(vector<int>& nums) {
        vector<int> robbed(nums.size());
        robbed[0] = nums[0];
        robbed[1] = max(nums[1],nums[0]);
        for (int i = 2; i<robbed.size(); i++) {
            robbed[i] = max(nums[i] + robbed[i-2], robbed[i-1]);
        }
        return robbed[robbed.size()-1];
    }
};
