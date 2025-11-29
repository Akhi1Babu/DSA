class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7;

        // 1. Sort the array so we can use two pointers for min and max
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<long long> pow2(n, 1);

        // 2. Precompute powers of 2 modulo MOD
        for (int i = 1; i < n; i++)
            pow2[i] = (pow2[i - 1] * 2) % MOD;

        long long ans = 0;
        int left = 0, right = n - 1;

        // 3. Two pointer sweep
        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                // All subsequences where nums[left] is min and max <= nums[right]
                ans = (ans + pow2[right - left]) % MOD;
                left++;
            } else {
                right--;
            }
        }

        return ans;
    }
};
