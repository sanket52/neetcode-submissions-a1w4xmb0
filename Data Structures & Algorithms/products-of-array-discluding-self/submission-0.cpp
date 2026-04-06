class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int pro=1;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    pro*=nums[j];
                }
            }
            res[i]=pro;
        }
return res;
    }
};
