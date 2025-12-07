class Solution {
public:
    string longestPalindrome(string s) {

        int n=s.size();
        if(n==1){
            return s;
        }
        string palindrome="";
        string lps="";
        for(int i=1;i<n;i++){
            //consider odd palindrome center..
            int left=i;
            int right=i;
            while(s[left]==s[right]){
                left--;
                right++;
                if(left<0 || right>n-1){
                    break;
                }

            }
            palindrome=s.substr(left+1,right-left-1);
            if(palindrome.size()>lps.size()){
                lps=palindrome;
            }
          

            //
           // considering even palindrome centers....
           left=i-1;
            right=i;
           while(s[left]==s[right]){
                left--;
                right++;
                 if(left<0 || right>n-1){
                    break;
                }

                
           }
             palindrome=s.substr(left+1,right-left-1);
            if(palindrome.size()>lps.size()){
                lps=palindrome;
            }

           


        }
        return lps;

        
    }
};