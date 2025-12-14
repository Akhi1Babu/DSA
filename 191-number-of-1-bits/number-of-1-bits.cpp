class Solution {
public:
    int hammingWeight(int n) {
        if(n==1){
            return 1;
        }
        int count=0;
        while(n>1){
            count+=(n&1); //checking if the last bit if set or not..
            n=n>>1; //right shift n
            if(n==1){
                count++;
            }
        }
        return count;
        
    }
};