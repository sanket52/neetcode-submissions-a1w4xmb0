class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>freq;


        for(int num:nums)
        {
            freq[num]++;
        }

        for(auto n:freq)
        {
            if(n.second==1)
            {
                return n.first;
            }
        }
         return 0;
    }
};