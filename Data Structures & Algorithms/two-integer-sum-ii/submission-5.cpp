class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        
        int st=0;
        int end=num.size()-1;
        vector<int>ans;
        while(st<end)
        {
            int sum=num[st]+num[end];

            if(sum==target)
            {
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }

            else if( sum<target)
            {
                st++;
            }
            else{
                end--;
            }
        }
        
    }
};
