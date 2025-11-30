class Solution {
private:
    void generatesubsequence(vector<int> &candidates,int target,int index,int sum, vector<int> & list,vector<vector<int>> & result){
         if(sum==target){
            result.push_back(list);
            return;

        }
        if(sum>target){
            return;
        }
        if(index>=candidates.size()){
            return;
        }
       
        list.push_back(candidates[index]);
        generatesubsequence(candidates,target,index,sum+candidates[index],list,result);
        list.pop_back();
        generatesubsequence(candidates,target,index+1,sum,list,result);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          int index=0;
        int sum=0;
        vector<int> list;
        vector<vector<int>> result;
        generatesubsequence(candidates,target,index,sum,list,result);
        return result;
    }
};