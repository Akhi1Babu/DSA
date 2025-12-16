class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int one=0;
        int two=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            one=(one^nums[i] & ~(two));
            two= (two^nums[i] & ~(one));
        }
        return one;
        
    }
};