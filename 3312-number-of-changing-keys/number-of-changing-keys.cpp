class Solution {
public:
    int countKeyChanges(string s) {
        // sort(s.begin(),s.end());
        int n=s.size();
        int count=0;
        char prevEle=s[0];

        for(int i=1;i<n;i++){
            if(s[i]==prevEle || s[i]==toupper(prevEle)|| s[i]==tolower(prevEle)){
                continue;
            }
            else{
                count++;
                prevEle=s[i];
            }
        }
        return count;
    }
};