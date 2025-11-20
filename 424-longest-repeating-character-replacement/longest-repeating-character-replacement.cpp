class Solution {
private:
    int findmajorityfreq(map <char,int> mpp){
        int maxfreq=0;
        char maxchar;
        for(auto &it : mpp){
            if(it.second>maxfreq){
                maxfreq=it.second;
                maxchar=it.first;

            }
        }
        return maxfreq;
    }
public:
    int characterReplacement(string s, int k) {
        map<char, int> mpp;
        int left = 0;
        int right = 0;
       int n = s.size();
        int maxlen=0;
        int nonsameelement=0;
        while (right < n) {
             mpp[s[right]]++;
            int maxfreq = findmajorityfreq(mpp);
            int nonsameelement=(right-left+1)-maxfreq;
           
            if(nonsameelement>k){
                mpp[s[left]]--;
                
                left++;
                
            }
            if(nonsameelement<=k){
                maxlen=max(maxlen,right-left+1);
            }
           
            right++;
        }
        return maxlen;
    }
};