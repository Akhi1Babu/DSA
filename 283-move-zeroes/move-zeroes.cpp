class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroindex = -1;
        int n = nums.size();
        for (int i=0; i < n; i++) {
            if (nums[i] == 0) {
                zeroindex = i;
                break;
            }
        }
        if (zeroindex != -1) {
            for (int i = zeroindex + 1; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[zeroindex], nums[i]);
                    zeroindex++;
                }
            }
        }
    }
};