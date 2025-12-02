class Solution {
private:


static bool comparator(vector<int> a, vector<int> b){
    if(a[1]<b[1]){
        return true;
    }
    else{
        return false;
    }

};
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
       
        sort(intervals.begin(),intervals.end(),comparator);
         int meetingendtime=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<meetingendtime){
                count++;

            }else{
            meetingendtime=intervals[i][1];
            }
        }
        return count;
    }
};