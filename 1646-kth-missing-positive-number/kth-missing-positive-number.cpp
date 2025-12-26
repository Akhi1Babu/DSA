class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // lets solve it through brute force ...O(n)
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k){
                return k;
            }
            else{
                k++;
            }
        }
        return k;
        
    }
};