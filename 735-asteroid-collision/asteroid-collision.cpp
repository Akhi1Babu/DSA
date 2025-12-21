class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (asteroids[i] > 0) {
                result.push_back(asteroids[i]);
            } else {
                
                    while (!result.empty() && result.back()>0 &&
                           abs(asteroids[i]) > result.back()) {
                        result.pop_back();
                    }
                    if (!result.empty() && abs(asteroids[i]) == result.back()) {
                        result.pop_back();
                    }
                    else if(!result.empty() && result.back()>abs(asteroids[i])){
                        continue;
                    }
                     else if (result.empty() || asteroids[i] < 0) {
                        result.push_back(asteroids[i]);
                    }
                
            }

            
        }
        return result;
    };
};