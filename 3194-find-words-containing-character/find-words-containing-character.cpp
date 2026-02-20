class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            sort(words[i].begin(),words[i].end());
            if(binary_search(words[i].begin(),words[i].end(),x)){
                result.push_back(i);
            }
        }
        return result;
    }
};