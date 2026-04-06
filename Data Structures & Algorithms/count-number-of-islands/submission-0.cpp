class Solution {
public:

    void dfsFlood(vector<vector<char>> & g,int i,int j, int rows,int cols)
    {
        if(i<0  || j<0 || i>=rows  || j>=cols)  return;

        if(g[i][j]!='1')  return;


        g[i][j]='0';
        dfsFlood(g,i+1,j,rows,cols);
        dfsFlood(g,i-1,j,rows,cols);
        dfsFlood(g,i,j+1,rows,cols);
        dfsFlood(g,i,j-1,rows,cols);


    }



    int numIslands(vector<vector<char>>& grid) {
        

        if(grid.empty()  ||  grid[0].empty())  return 0;

        int rows=grid.size();

        int cols=grid[0].size();

        int count=0;


        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfsFlood(grid,i,j,rows,cols);
                }
            }
           
        }
         return count;
    }
};
