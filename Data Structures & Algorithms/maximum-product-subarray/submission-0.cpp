class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int leftPro=1;
        int rightPro=1;
        int maxiPro=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            leftPro*=nums[i];
            rightPro*=nums[n-1-i];
            maxiPro=max(maxiPro,max(leftPro,rightPro));
            if(leftPro==0) leftPro=1;
            if(rightPro==0) rightPro=1;

        }

        return maxiPro;
    }
};
