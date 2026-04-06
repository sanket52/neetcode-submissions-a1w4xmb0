class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>angle;
        for(int i=0;i<numRows;i++)
        {
            vector<int>rows(i+1,1);

            for(int j=1;j<i;j++)
            {
                rows[j]=angle[i-1][j-1]+angle[i-1][j];
            }
            angle.push_back(rows);
        }
        return angle;
    }
};