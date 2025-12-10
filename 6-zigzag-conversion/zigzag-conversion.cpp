class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string> rowarray(numRows);
        int n=s.size();
        int direction=1;
        int currentrow=0;
        for(int i=0;i<n;i++){
           
            
                rowarray[currentrow].push_back(s[i]);
            
            if(currentrow==numRows-1){
                direction=-1;

            }
            if(currentrow==0){
                direction=1;
            }
            currentrow+=direction;

        }
        string result="";
        for(int i=0;i<numRows;i++){
            result+=rowarray[i];
        }
        return result;
        
    }
};