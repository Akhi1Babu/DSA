class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mpp;
        // solving throug two pointer and sliding window approach....
        int left=0;
        int maxlen=0;
        
        int n=fruits.size();
        for(int right=0;right<n;right++){
            mpp[fruits[right]]++;
            if(mpp.size()>2){  // we can store atmost n type of fruits....
                                // remember set only store distinct elements..
                mpp[fruits[left]]--;
                if(mpp[fruits[left]]==0){
                    mpp.erase(fruits[left]);
                    
                }
                left++;


            }
            if(mpp.size()<=2){
                maxlen=max(maxlen,right-left+1);

            }
        }
        return maxlen;


        
    }
};