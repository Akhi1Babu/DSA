class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mpp;
         int n=s.size();
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        int index=-1;
       
        for(int i=n-1;i>=0;i--){
            if(mpp[s[i]]==1){
                index=i;

            }
        }
        return index;
        
    }
};