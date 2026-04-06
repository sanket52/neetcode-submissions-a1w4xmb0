class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left=0;
        int total=0,res=INT_MAX;

        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];

            while(total>=target)
            {
                res=min(i-left+1,res);
                total-=nums[left];
                left++;
            }
        }
        return res==INT_MAX?0:res;
    }
};