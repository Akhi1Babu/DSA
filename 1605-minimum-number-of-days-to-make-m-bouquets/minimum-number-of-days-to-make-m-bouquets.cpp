class Solution {
private:
    int checking(vector<int> &bloomDay,int m,int k,int n,int mid){
        int count=0;
        int noofboque=0;
        for(int i=0;i<n;i++){
            if(mid>=bloomDay[i]){
                count++;
                noofboque+=(count/k);
                if(count%k==0){
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        return noofboque;

    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int minday=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if (checking(bloomDay,m,k,n,mid)>=m){
                minday=min(minday,mid);

                high=mid-1;
            }
            else if((checking(bloomDay,m,k,n,mid)<m)){
                low=mid+1;
            }
        }
        if(minday==INT_MAX){
            return -1;
        }

        return minday;

        
    }
};