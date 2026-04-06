class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>f;

        for(int val : nums)
        {
            f[val]++;
        }
        for(int val:nums)
        {
            if(f[val]>=2)
            return true;
        }
return false;
    }
};
