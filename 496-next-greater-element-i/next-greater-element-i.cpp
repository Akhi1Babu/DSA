class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
     
        int n=nums2.size();
        map<int,int> mpp;
        stack<int> stck;
        for(int i=n-1;i>=0;i--){
            if(stck.size()==0){
                mpp[nums2[i]]=-1;
                stck.push(nums2[i]);
            }
            else{
                while(!stck.empty() &&stck.top()<nums2[i]){
                    stck.pop();
                   if(stck.size()==0){
                    stck.push(nums2[i]);
                     mpp[nums2[i]]=-1;
                    break;
                   }

                }
               
               if(!stck.empty() && stck.top()>nums2[i]){
                    mpp[nums2[i]]=stck.top();
                    stck.push(nums2[i]);
               }
            }

        }
        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            result.push_back(mpp[nums1[i]]);
        }
        return result;
        
    }
};