class Solution {
private:
    bool canform(vector<int> &nums){
        if(nums[0]+nums[1]<=nums[2]){
            return false;

        }
        if(nums[1]+nums[2]<=nums[0]){
            return false;
        }
        if(nums[0]+nums[2]<=nums[1]){
            return false;
        }
        return true;

    }
public:
    string triangleType(vector<int>& nums) {
        string result="none";
        if(canform(nums)){
            if(nums[0]==nums[1]&&nums[1]==nums[2]){
                result="equilateral";
            }
            else if(nums[0]==nums[1]||nums[1]==nums[2]||nums[0]==nums[2]){
                result="isosceles";
            }
            else{
                result="scalene";
            }
        }
        
            return result;
        
        
    }
};