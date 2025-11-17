class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        int left=0;
        int maxlen=0;
        int prevk=k;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            if(k>=(1*(right-left+1))-sum){
                maxlen=max(maxlen,right-left+1);
            }
            else{
                while(k<(1*(right-left+1))-sum){
                   
                    sum-=nums[left];
                     left++;
                }
            }
              maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
        
    }
};