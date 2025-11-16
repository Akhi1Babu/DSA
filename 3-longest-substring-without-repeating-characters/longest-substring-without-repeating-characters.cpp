class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;  // storing the element and its index
        int maxlen=0;
        int right=0;
        int n=s.size();
        int left=0;
        
        while(right<n && left <= right){
            if(mpp.find(s[right])==mpp.end() || mpp[s[right]]<left ){
                maxlen=max(maxlen,right-left+1);
               
                

                

            }
            if(mpp.find(s[right])!=mpp.end()){
               if(mpp[s[right]]>=left){
                left=mpp[s[right]]+1;
               }
                
            }
            mpp[s[right]]=right;
             right++;


        }
        return maxlen;
        
    }
};