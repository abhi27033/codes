class Solution {
public:
    vector<vector<long long>> dp;
    // int solve(int i,int j,int& m,int& n,vector<vector<int>>& ob)
    // {
    //     if(i>=m||j>=n||ob[i][j]==1)return 0;
    //     if(i==m-1&&j==n-1)return 1;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     return dp[i][j]=solve(i+1,j,m,n,ob)+solve(i,j+1,m,n,ob);
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        dp.resize(m+1,vector<long long>(n+1,0));
        // return solve(0,0,m,n,obstacleGrid);
        if(obstacleGrid[m-1][n-1]==0)
        dp[m-1][n-1]=1;
        else
            return 0;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(!(i==m-1&&j==n-1)&&obstacleGrid[i][j]==0)
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
        
    }
};