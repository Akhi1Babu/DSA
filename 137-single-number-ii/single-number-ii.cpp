class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();

        for(int bitindex=0;bitindex<=31;bitindex++){
            int count=0;
            for(int i=0;i<n;i++){
                if(nums[i]& (1<<bitindex)){
                    count++;
                }
            }
            if(count%3!=0){
                ans=ans|(1<<bitindex);
            }
            
        }
        return ans;
        
    }
};