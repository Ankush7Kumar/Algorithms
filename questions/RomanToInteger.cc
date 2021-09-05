class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> umap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int res = 0;
        int temp = INT_MAX;
        for(char c: s){
            int curr = umap[c];
            res += curr;
            if (temp < curr) {
                res -= temp * 2;
            }
            temp = curr;            
        }
        return res;
    }
};
