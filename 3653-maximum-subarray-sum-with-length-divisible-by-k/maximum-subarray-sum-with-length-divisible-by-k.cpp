class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size();
        vector<long long> prefixsum;
        long long sum = 0;
        prefixsum.push_back(sum);
        // 1- build the prefix sum
        for (long i = 1; i <= n; i++) {
            sum += nums[i - 1];
            prefixsum.push_back(sum);
        }
        // grouping the prefix index based on the modulo grouping
        vector<vector<int>> bucket(k);
        for (int i = 0; i <= n; i++) {
            bucket[i % k].push_back(i);
        }
        long long maxprefixsum = LLONG_MIN;
        for (int i = 0; i < k; i++) {
            long long minprefixsum = LLONG_MAX;
            for (long long idx : bucket[i]) {
                 if (minprefixsum != LLONG_MAX) {
                    long long candidate = prefixsum[idx] - minprefixsum;
                    maxprefixsum = max(maxprefixsum, candidate);
                }

                // update minprefix AFTER
                minprefixsum = min(minprefixsum, prefixsum[idx]);
            }
        }
        return maxprefixsum;
    }
};