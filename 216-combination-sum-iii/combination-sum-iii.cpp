class Solution {
private:
    void generatingCombinations(int index,vector<vector<int>> &result,int k,int n, vector<int> &arr,int sum,vector<int> &list){
        if(sum==n && list.size()==k){
            result.push_back(list);
            return;
        }
        if(sum>n || list.size()>k){
            return;
        }
        if(index>arr.size()-1){
            return;
        }
        list.push_back(arr[index]);
        generatingCombinations(index+1,result,k,n,arr,sum+arr[index],list);
        list.pop_back();
        
                generatingCombinations(index+1,result,k,n,arr,sum,list);
                
            
        }

    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        int sum=0;
        vector<vector<int>> result;
        vector<int> list;
        int index=0;
        generatingCombinations(index,result,k,n,arr,sum,list);
        return result;
        
    }
};