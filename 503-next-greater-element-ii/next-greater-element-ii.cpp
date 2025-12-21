class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        stack<int> stck;
        for(int i=2*n-1;i>=0;i--){
            while(!stck.empty() && nums[i%n]>=stck.top()){
                stck.pop();
            }
                if(i<n){
                    if(stck.empty()){
                        result[i]=-1;
                    }
                    else{
                        result[i]=stck.top();
                    }
                }
                stck.push(nums[i%n]);



              
            

        }
        return result;
        
    }
};