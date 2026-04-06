class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        map<int,int>f;
        for(int i=0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(f[nums[i]]>=2)
            return nums[i];
        }

        return 1;
    }
};
