class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> result;
        for(int i=0;i<n;i++){
           
            auto it=find(words[i].begin(),words[i].end(),x);
               
            if(it!=words[i].end()){
                 result.push_back(i);
            }
        }
        return result;
    }
};