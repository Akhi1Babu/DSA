class Solution {
public:
    string removeKdigits(string num, int k) {
        list<char> ls;
        int n = num.size();
        for (int i = 0; i < n; i++) {
            while (!ls.empty() && ls.back() > num[i] && k > 0) {
                ls.pop_back();
                k--;
            }
            ls.push_back(num[i]);
        }

        while (k > 0 && !ls.empty()) {
            ls.pop_back();
            k--;
        }
        if (ls.size() == 0) {
            return "0";
        }
        string result;
        int m = ls.size();

        for (int i = 0; i < m; i++) {

            result.push_back(ls.front());
            ls.pop_front();
        }

        int i = 0;
        while (result[i] == '0' && i < result.size() - 1) {
            i++;
        }
        return result.substr(i);
    }
};