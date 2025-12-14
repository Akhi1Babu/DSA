class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorednumber=start^goal;
        // find the no of set bits in xorednumber..
        long long count=0;
        while(xorednumber>0){
            count+=xorednumber&1;
           xorednumber= xorednumber>>1;
            
        }
        
        return (int)count;
    }
};