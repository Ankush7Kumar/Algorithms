class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> DP(n+1);
        DP[0].push_back("");
        for (int i=1; i<=n; ++i)
        for (int j=0; j<i; ++j)
        for (const string& a : DP[j])
        for (const string& b : DP[i-j-1])
            DP[i].push_back("("+a+")"+b);
        return DP[n];
    }
};
