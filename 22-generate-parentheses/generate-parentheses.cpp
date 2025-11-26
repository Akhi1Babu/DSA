class Solution {
void generate(int open,int close,string s,int n,vector<string> &result){
    
    if(open==close && open+close==2*n){
        result.push_back(s);
        return;
    }
    if(open<=n){
        generate(open+1,close,s+'(',n,result);
    }
    if(close<open){
        generate(open,close+1,s+')',n,result);
    }


}
public:
    vector<string> generateParenthesis(int n) {
       string s="";
        vector<string> result;
        generate(0,0,s,n,result);
        return result;
        
    }
};