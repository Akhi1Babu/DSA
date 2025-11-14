class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=nums.size();
       
        int candidateelement=-1;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                candidateelement=nums[i];
                
            }
            else if(candidateelement==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return candidateelement;
    
        
    }
};