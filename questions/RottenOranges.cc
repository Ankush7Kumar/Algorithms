class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int c=0;
        queue<pair<int,int>> q;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]==2) 
                    q.push({i,j});
                else if(grid[i][j]==1)
                    c=1;
            }
        }
        if(q.empty() && c==1)
            return -1;
        if(c=0)
            return 0;
        int count=0;
        while(!q.empty()) {
            int s=q.size();
            int flag=0;
            for(int k=0; k<s; k++) {
             pair<int,int> p=q.front();
             q.pop();
             vector<int> di{-1,0,1,0,-1};
             for(int i=0; i<4; i++) {
                int x=p.first+di[i];
                int y=p.second+di[i+1];
                if(x>=0 && y>=0 && x<m && y<n) {
                    if(grid[x][y]==1) {
                        grid[x][y]=2;
                        q.push({x,y});
                        flag=1;
                    }
                }
             }
            }
            if(flag==0) 
                break;
            count++;
        }
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]==1)
                    return -1;
            }
        }
     return count;
    }
};
