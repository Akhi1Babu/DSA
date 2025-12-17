class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long long xored=0;
        for(int i=0;i<n;i++){
            xored=xored^nums[i];
        }
        long long firstsetbit=0;
        firstsetbit=(xored & xored-1)^xored;
        int bucketA=0;
        int bucketB=0;
        for(int i=0;i<n;i++){
            if(nums[i] & firstsetbit){
                bucketA=bucketA^nums[i];
            }
            else{
                bucketB=bucketB^nums[i];
            }
        }
        return {bucketA,bucketB};

    }
};