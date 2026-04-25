class Solution {
public:
    int maxDifference(string s) {
        vector<int>freq(26,0);

        for(char c:s)
        {
            freq[c-'a']++;

        }

        int maxDiff=INT_MIN;
        int minDiff=INT_MAX;

         for(int f:freq)
         {
            if(f==0)  continue;

            if(f%2==1)
            {
                maxDiff=max(maxDiff,f);
            }
            else{
                minDiff=min(minDiff,f);
            }
         }
         return maxDiff-minDiff;
    }
};