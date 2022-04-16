class Solution {
public:
    
    int dx[4]={0,-1,0,1};
    int dy[4]={-1,0,1,0};
    
    void dfs(int x, int y, int n, int m, bool &flag, vector<vector<int>>&vec)
    {
        if(x<0 || y<0 || x>=n || y>=m || vec[x][y]==1)
            return;
        if((x==0 || y==0 || x==n-1 || y==m-1) && vec[x][y]==0)
            flag=false;
        vec[x][y]=1;
        for(int i=0;i<4;i++)
            dfs(x+dx[i], y+dy[i], n, m, flag, vec);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size(), m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    ans++;
                    bool flag=true;
                    dfs(i,j,n,m,flag,grid);
                    if(!flag)
                        ans--;
                }
            }
        }
        return ans;
    }
};
