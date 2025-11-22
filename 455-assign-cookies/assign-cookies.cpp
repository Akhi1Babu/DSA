class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int greedpointer=0;
        int cookiepointer=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(greedpointer<g.size() && cookiepointer<s.size()){
            if(s[cookiepointer]>=g[greedpointer]){
                cookiepointer++;
                greedpointer++;
            }
            else if(g[greedpointer]>s[cookiepointer]){
                
                    cookiepointer++;
                
            }
        }
        return greedpointer;
        
        
    }
};