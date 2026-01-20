class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        int i = 0;
        vector<int> arr;
        int n = nums.size();
        while (nums.size()>0) {
            stack<int> st;
           
                sort(nums.begin(),nums.end());
            
            st.push(nums[i]);
            nums.erase(nums.begin());
            
            st.push(nums[i]);
            nums.erase(nums.begin());
            while(!st.empty()) {
                arr.push_back(st.top());
                st.pop();

            }
        }
        return arr;
    }
};