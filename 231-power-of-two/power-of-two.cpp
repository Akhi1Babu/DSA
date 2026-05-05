class Solution {
public:
    bool isPowerOfTwo(int n) {
        //solving throught bit manupulation methond..
        // count  how many set bits is persent...if only 1 is present then return true...
        int i=0;
        int count=0;
           if (n <= 0) return false;
        while(i<=31){
            if(((1<<i)&n)!=0){
                count++;
                
            }
            i++;
        }
        return count==1;
    }
};