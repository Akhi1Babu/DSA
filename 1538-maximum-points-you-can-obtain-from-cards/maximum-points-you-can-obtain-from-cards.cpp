class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int leftindex=0;
        int leftsum=0;
        //j --> right index

        int rightsum=0;
        int maxpoints=0;
        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];
        }
        maxpoints=leftsum;
        int leftremovingindex=k-1;
        
        for(int j=n-1;j>n-1-k;j--){
            rightsum+=cardPoints[j];
            leftsum-=cardPoints[leftremovingindex];
            leftremovingindex--;
            maxpoints=max(maxpoints,leftsum+rightsum);
        }
        return maxpoints;
    }
};