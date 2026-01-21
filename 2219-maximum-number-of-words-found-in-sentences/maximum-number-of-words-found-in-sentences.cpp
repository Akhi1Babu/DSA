class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxcount=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            int count=0;
            int j=0;
            while(j<sentences[i].size()){
                if(sentences[i][j]==' '){
                    count++;

                }
                j++;
            }
            maxcount=max(maxcount,count+1); //count+1 for the last/ending word...
        }
        return maxcount;
        
    }
};