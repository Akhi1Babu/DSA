class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int n=operations.size();
        int result=0;

        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                result=score[score.size()-1]+score[score.size()-2];
                score.push_back(result);

            }
           else if(operations[i]=="D"){
                result=2*score[score.size()-1];
                score.push_back(result);
            }
           else if(operations[i]=="C"){
                score.pop_back();
            }
              else {
                score.push_back(stoi(operations[i]));
            }
        }
        return accumulate(score.begin(),score.end(),0);
    }
};