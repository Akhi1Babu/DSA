class Solution {
private:
    long long findingMinimumSum(vector<int> &nums,vector<int> &pse,vector<int> &nse){
        long long totalsum=0;
        long long n=nums.size();
        for(int i=0;i<n;i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;
            totalsum+=nums[i]*(right*left);


        }
        return totalsum;
    }
    long long findingMaximumSum(vector<int> &nums,vector<int> &pge,vector<int> &nge){

          long long totalsum=0;
        long long n=nums.size();
        for(int i=0;i<n;i++){
            long long left=i-pge[i];
            long long right=nge[i]-i;
            totalsum+=nums[i]*(right*left);


        }
        return totalsum;
    }
public:
    long long subArrayRanges(vector<int>& nums) {
        long long n=nums.size();
        vector<int> pse(n);
        stack<int> st1;
        for(int i=0;i<n;i++){
                while(!st1.empty() && nums[i]<=nums[st1.top()]){
                    st1.pop();
                }
                if(st1.empty()){
                    pse[i]=-1;
                }
                else{
                    pse[i]=st1.top();
                }
                st1.push(i);
                


        }
        vector<int> nse(n);
        stack<int> st2;
        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && nums[i]<nums[st2.top()]){
                st2.pop();
            }
            if(st2.empty()){
                nse[i]=n;
            }
            else{
                nse[i]=st2.top();
            }
            st2.push(i);

        }
        long long minimumsum=findingMinimumSum(nums,pse,nse);
        stack<int> st3;
        vector<int> pge(n);
        for(int i=0;i<n;i++){
                while(!st3.empty() && nums[i]>=nums[st3.top()]){
                    st3.pop();
                }
                if(st3.empty()){
                    pge[i]=-1;
                }
                else{
                    pge[i]=st3.top();
                }
                st3.push(i);
                


        }
         stack<int> st4;
        vector<int> nge(n);
        for(int i=n-1;i>=0;i--){
                while(!st4.empty() && nums[i]>nums[st4.top()]){
                    st4.pop();
                }
                if(st4.empty()){
                    nge[i]=n;
                }
                else{
                    nge[i]=st4.top();
                }
                st4.push(i);
                


        }
        long long maximumsum=findingMaximumSum(nums,pge,nge);
        
        return maximumsum-minimumsum;

        
    }
};