class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        
        if(size == 1)
            return triangle[0][0];
        
        for(int i = 1; i < size; i++){
            for(int j = 0; j < triangle[i].size(); j++){
                if(j == 0)
                    triangle[i][j] += triangle[i-1][j];
                else if(j == triangle[i].size()-1)
                    triangle[i][j] += triangle[i-1][j-1];
                else{
                    triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
                }
            }
        }
        
        int minpath = *min_element(triangle[triangle.size()-1].begin(), triangle[triangle.size()-1].end());
        
        return minpath;
    }
};
