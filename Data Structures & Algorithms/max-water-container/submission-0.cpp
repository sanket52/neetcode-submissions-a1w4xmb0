class Solution {
public:
    int maxArea(vector<int>& hgt) {

        int max_water=0;
        int lp=0,rp=hgt.size()-1;
        while(lp<=rp)
        {
            int width=rp-lp;
            int mini=min(hgt[rp],hgt[lp]);
            int area=width*mini;
            max_water=max(max_water,area);
            hgt[lp]<hgt[rp]?lp++:rp--;
        }
        return max_water;
        
    }
};
