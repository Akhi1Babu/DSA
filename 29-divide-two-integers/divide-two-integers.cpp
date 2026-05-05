class Solution {
public:
    int divide(int dividend, int divisor) {
     
        if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
        else if(dividend==INT_MAX && divisor==1){
            return INT_MAX;
        }
        else if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        int answer=0;
        bool negative=false;
        if(dividend<0 && divisor<0){
            negative=false;
            
        }
        else if(dividend<0 || divisor<0){
            negative=true;
           
        }
        long long divid = abs((long long)dividend);
long long div = abs((long long)divisor);
        while(div<=divid){
            int maxsize=-1;
            int i=0;
            while(i<32){
                if((div<<i)<=divid){
                    maxsize=i;
                    i++;
                }
                else{
                    break;
                }
            }
            
               answer+=(1<<maxsize);
            divid-=(div<<maxsize);
         

        }
        if(negative==true){
            return -1*answer;
        }
        else{
            return answer;
        }
    }
};