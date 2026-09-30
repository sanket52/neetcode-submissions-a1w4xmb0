class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>arr(n*2);

        for(int i=0;i<nums.size();i++)
        {
            arr[i]=nums[i];
            arr[nums.size()+i]=nums[i];
        }
        return arr;
    }
};