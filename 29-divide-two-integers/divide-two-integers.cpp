class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign = true;
        if(dividend< 0 && divisor<0){
            sign=true;
        }
        else if (dividend < 0 || divisor < 0) {
            sign = false;
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
      
      long long a = llabs((long long) dividend);
long long b = llabs((long long) divisor);

        int ans = 0;
        while (a>=b) {
              long long maxpow = 0;

            while (a >= b << maxpow) {
                maxpow++;
                if(a<b<<maxpow){
                    maxpow--;
                    break;
                }
            }
            
            ans +=( 1 << maxpow);
            a = a - (b << maxpow);
        }
        if(sign==false  && ans==INT_MAX){
            return -1*INT_MAX;
        }
        if(sign==false){
            return (int)-1*ans;
        }
        else{
            return (int)ans;
        }
    }
};