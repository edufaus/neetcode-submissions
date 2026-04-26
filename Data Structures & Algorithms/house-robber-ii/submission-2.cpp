
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1){
            return nums[0];
        }
        vector<int> robbedv0(nums.size()-1);
        vector<int> robbedv1(nums.size()-1);
        robbedv0[0] = nums[0];
        robbedv0[1] = max(robbedv0[0], nums[1]);
        robbedv1[0] = nums[1];
        robbedv1[1] = max(robbedv1[0], nums[2]);
        for (int i=2; i<robbedv0.size(); i++) {
            robbedv0[i] = max(robbedv0[i-1], nums[i]+robbedv0[i-2]);
            robbedv1[i] = max(robbedv1[i-1], nums[i+1]+robbedv1[i-2]);
        }

        return max(robbedv0[robbedv0.size()-1],robbedv1[robbedv1.size()-1]);
    }
};
