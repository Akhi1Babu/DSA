class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            int othernum=target-nums[i];
            if(mpp.find(othernum)!=mpp.end()){
                result.push_back(i);
                result.push_back(mpp[othernum]);
            }
            mpp[nums[i]]=i;
            
        }
        return result;
    }
};