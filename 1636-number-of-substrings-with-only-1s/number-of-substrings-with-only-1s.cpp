class Solution {
    int count=0;
public:
    int numSub(string s) {
        int left=0;
        int right=0;
        long long count=0;
        int n=s.size();
        while(right<n){
            if(s[right]=='0'){
                right++;
                left=right;
            }
            else if(s[right]=='1'){
                count=count+(right-left)+1;
                right++;

            }

        }
        return count%1000000007;
       
    }
};