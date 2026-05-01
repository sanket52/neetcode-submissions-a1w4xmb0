class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        

        int max1=0;
        int max2=0;

        int mini1=INT_MAX;
        int mini2=INT_MAX;

        for(int num:nums)
        {
            if(num>max1)
            {
                max2=max1;
                max1=num;
            }
            else if(num>max2)
            {   
                max2=num;
            }

             if(num<mini1)
            {
                mini2=mini1;
                mini1=num;
            }

            else if(num<mini2){
                mini2=num;
            }
        }
        return  (max1*max2)-(mini1*mini2);
    }
};