class Solution {
public:
    int trap(vector<int>& hgt) {
        
        int left=0;
        int right=hgt.size()-1;

        int leftMax=hgt[left];
        int rightMax=hgt[right];

        int water=0;

        while(left<right)
        {
            if(hgt[left]<hgt[right])
            {
                left++;
                leftMax=max(leftMax,hgt[left]);
                water+=leftMax-hgt[left];
            }
            else{
                right--;
                rightMax=max(rightMax,hgt[right]);
                water+=rightMax-hgt[right];
            }
        }
        return water;
    }
};
