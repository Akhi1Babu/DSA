class Solution {
private:
    bool checking(string word){
        int n=word.size();
        if(n%2!=0){
            int mid=n/2;
            int left=mid;
            int right=mid;
            while(left>=0 && right<n){
                if(word[left]!=word[right]){
                    return false;
                }
                left--;
                right++;
            }
             return true;
            
        }
       
       if(n%2==0){
            int mid=n/2;
            int left=mid-1;
            int right=mid;
            while(left>=0 && right<n){
                if(word[left]!=word[right]){
                    return false;
                }
                left--;
                right++;
            }
            return true;
       }
       return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            if(checking(words[i])){
                return words[i];
            }
        }
        return "";
        
    }
};