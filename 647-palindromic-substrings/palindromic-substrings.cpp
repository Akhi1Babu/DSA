class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            // considering odd palindrome center...
            int left=i;
            int right=i;
            while(s[left]==s[right]){
                count++;
                left--;
                right++;
                if(left<0 || right>n-1){
                    break;
                }
            }
            //
            left=i-1;
            right=i;
            while(s[left]==s[right]){
                count++;
                left--;
                right++;
                if(left<0 || right>n-1){
                    break;
                }
                
            }
        }
        return count+1;
        
    }
};