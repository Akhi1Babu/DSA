class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int minimum=INT_MAX;
        int right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            // if left part is sorted....
            if(nums[mid]>=nums[left]){
                minimum=min(minimum,nums[left]);
                left=mid+1;

            }
            else if(nums[mid]<=nums[right]){
                minimum=min(minimum,nums[mid]);
                right=mid-1;
            }

        }
        return minimum;
        
    }
};