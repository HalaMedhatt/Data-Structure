class Solution {
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int n,m;
    bool valid(int x,int y){
        return x<n&&y<m&&x>=0&&y>=0;
    }
    void dfs(int x,int y,vector<vector<char>>& grid){
        grid[x][y]='0';
        for(int k=0;k<4;k++){
            int xx=dx[k]+x;
            int yy=dy[k]+y;
            if(valid(xx,yy)&&grid[xx][yy]=='1'){
                dfs(xx,yy,grid);
            }
        }

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int islands=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    islands++;
                }

            }
        }
        return islands;
    }
};