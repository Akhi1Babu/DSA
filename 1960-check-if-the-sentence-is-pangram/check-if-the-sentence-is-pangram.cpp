class Solution {
public:
    bool checkIfPangram(string sentence) {
        int hasharr[26]={0};
        for(int i=0;i<sentence.size();i++){
            hasharr[sentence[i]-'a']++;
        }
        for(int i=0;i<=25;i++){
            if(hasharr[i]==0){
                return false;
            }
        }
        return true;
    }
};