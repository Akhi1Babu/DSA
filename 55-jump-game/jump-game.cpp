class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int position=0;
        int maxposition=0;
        for(int i=0;i<n;i++){
            if(i>maxposition){
                return false;
            }
            position=i+nums[i];
            maxposition=max(maxposition,position);

        }
        return true;
        
    }
};