class Solution {
public:

    int dfs(vector<vector<int>> &grid, int r, int c) {
        int n = grid.size();
        int m = grid[0].size();

        if(r < 0 || c < 0 || r >= n || c >= m) {
            return 0;
        }

        if(grid[r][c] == 1) {
            return 1;
        }

        grid[r][c] = 1;

        int up = dfs(grid, r-1, c);
        int right = dfs(grid, r, c+1);
        int down = dfs(grid, r+1, c); 
        int left = dfs(grid, r, c-1);

        return up & right & down & left;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 0) {
                    count += dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};