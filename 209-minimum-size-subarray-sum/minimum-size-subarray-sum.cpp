class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // using sliding window....
        int right=0;
        int left=0;
        int n=nums.size();
        int minimumlen=INT_MAX;
        int sum=0;
        for(int i=right;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                minimumlen=min(minimumlen,i-left+1);
                sum=sum-nums[left];
                left++;
                
            }
            
        }
        if(minimumlen==INT_MAX){
            return 0;
        }
        return minimumlen;
    }
};