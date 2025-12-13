class Solution {
public:
    string baseNeg2(int n) {
        string result="";
        if(n==0){
            result=result+'0';
            return result;
        }
        while(n!=0){
            int remainder=n%(-2);
            n=n/(-2);
            if(remainder==-1){
                remainder+=2;
                n+=1;
            }
            result+=remainder+'0';
        }
        reverse(result.begin(),result.end());
        return result;
    }
};