class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map <int,int> mpp;
        int n=nums.size();
        int sum=0;
        int count=0;
        mpp[0]=1;
        int prefixsum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefixsum=sum-k;
            if(mpp.find(prefixsum)!=mpp.end()){
                count+=mpp[prefixsum];

            }
        
        if(mpp.find(sum)!=mpp.end()){
            mpp[sum]+=1;
        }
        else{
            mpp[sum]=1;
        }

        

        }
        return count;
    }
};