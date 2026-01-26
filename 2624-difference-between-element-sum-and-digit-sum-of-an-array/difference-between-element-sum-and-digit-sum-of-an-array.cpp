class Solution {
private:
    int findingeleSum(vector<int> &nums){
        int sum=accumulate(nums.begin(),nums.end(),0);
        return sum;

    }
    int findingdigSum(vector<int> &nums){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int temp=nums[i];
            while(temp>0){
                sum=sum+temp%10;
                temp=temp/10;
            }
        }
        return sum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=findingeleSum(nums);
        int digitsum=findingdigSum(nums);
        return abs(elementsum-digitsum);
        
    }
};