class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //using sliding window..
        int n=s1.size();
        int m=s2.size();
        int left=0;
        int right=0;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(int i=0;i<n;i++){
            v1[s1[i]-'a']++;
        }
    
        while(right<m){
            v2[s2[right]-'a']++;
            if(right-left+1==n){
                if(v1==v2){
                    return true;
                }
                else{
                v2[s2[left]-'a']--;
                left++;
                }
            }
            right++;



        }
        return false;
        
    }
};