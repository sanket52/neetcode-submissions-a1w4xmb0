class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int target) {
        
        int m=mt.size();
        int n=mt[0].size();


        int r=0;
        int c=n-1;

        while(r<m  && c>=0)
        {
            if(mt[r][c]>target)
            {
                c--;
            }
            else if(mt[r][c]<target)
            {
                r++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
