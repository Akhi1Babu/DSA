class Solution {
private:
    int countingsubarray(vector <int>& nums,int goal){
        if(goal<0){
            return 0;
        }
        int left=0;
        int right=0;
        int n=nums.size();
        int sum=0;
        int count=0;
        while(right<n){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            if(sum<=goal){
                count+=(right-left+1);
            }
            right++;
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countingsubarray(nums,goal)-countingsubarray(nums,goal-1);

        
    }
};