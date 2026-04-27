class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>match=heights;
        sort(heights.begin(),heights.end());

        int count=0;

        for(int i=0;i<heights.size();i++)
        {
            if(match[i]!=heights[i])
            {
                count++;
            }
        }

        return count;
    }
};