class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>freq;

        for(int num : nums)
        {
            freq[num]++;
        }

        for(int val:nums)
        {
            if(freq[val]>=2)
            return true;
        }
        return false;
    }
};