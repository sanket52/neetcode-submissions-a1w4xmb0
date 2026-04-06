class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        vector<int>p;
        while(st<end)
        {    int sum=nums[st]+nums[end];
            if(sum==target){
                  p.push_back(st+1);
                  p.push_back(end+1);
                  return p;
            }
            else if(sum<target)
            {
                st++;
            }
            else{
                end--;
            }
        }
        
    }
};
