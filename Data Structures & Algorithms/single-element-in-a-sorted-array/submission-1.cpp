class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>freq;

        for(int num:nums)
        {
            freq[num]++;
        }


        for(auto ans:freq)
        {
            if(ans.second==1)
            {
                return ans.first;
            }
        }
        return 0;
    }
};