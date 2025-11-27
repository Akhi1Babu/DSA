class Solution {
void generatesubset(vector<int> &nums,int index,int n,vector<vector<int>> &result,vector<int> list){
    
    if(index>=n){
        result.push_back(list);
        return;
        
    }
    list.push_back(nums[index]);
    generatesubset(nums,index+1,n,result,list);
    list.pop_back();
    generatesubset(nums,index+1,n,result,list);

}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> result;
        vector<int> list;
        generatesubset(nums,0,n,result,list);
        return result;

    }
};