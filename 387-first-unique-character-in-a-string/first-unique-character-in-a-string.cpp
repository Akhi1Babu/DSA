class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int index=-1;
        for(int i=s.size()-1;i>=0;i--){
            if(mpp[s[i]]==1){
                index=i;

            }
        }
        return index;
        
    }
};