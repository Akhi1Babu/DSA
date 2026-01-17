class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        int current=0;
        int i=0;
        int count=0;
        sort(clips.begin(),clips.end());
        while(current<time){
            int farthest=-1;
            while(i<clips.size() && clips[i][0]<=current ){
                farthest=max(farthest,clips[i][1]);
                i++;
            }
            if(farthest<current){
                return -1;
            }
            current=farthest;
            count++;

        }
        return count;
    }
};