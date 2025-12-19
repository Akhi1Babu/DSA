class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> stck;
        

        for (int i = 0; i < n; i++) {
            if (stck.size()==0 && (s[i]==')'||s[i] ==']'|| s[i]=='}')){
            return false;
        }
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stck.push(s[i]);
            } else if (s[i] == ')') {
                if (stck.size() > 0) {
                    if (stck.top() == '(') {
                        stck.pop();
                    } else {
                        return false;
                    }
                }
            } else if (s[i] == '}') {
                if (stck.size() > 0) {
                    if (stck.top() == '{') {
                        stck.pop();
                    } else {
                        return false;
                    }
                }
            } else if (s[i] == ']') {
                if (stck.size() > 0) {
                    if (stck.top() == '[') {
                        stck.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if (stck.size() == 0) {
            return true;
        }
        return false;
    }
};