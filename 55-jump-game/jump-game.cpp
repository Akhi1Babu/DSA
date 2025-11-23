class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindex=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>maxindex){
                return false;
            }
            else if(maxindex>=n-1){
                return true;
            }
            maxindex=max(maxindex,i+nums[i]);
        }
        return true;
    }
};