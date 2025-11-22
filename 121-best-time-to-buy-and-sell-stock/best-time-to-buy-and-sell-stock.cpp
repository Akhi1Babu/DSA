class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxprofit=0;
        int lowprice=prices[0];

        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<lowprice){
                lowprice=prices[i];
            }
            profit=prices[i]-lowprice;
            maxprofit=max(maxprofit,profit);
            
        }
         return maxprofit;
        
    }
};