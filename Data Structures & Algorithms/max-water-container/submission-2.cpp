class Solution {
public:
    int maxArea(vector<int>& hgt) {
        int lp=0;
        int rp=hgt.size()-1;
        int max_water=0;

        while(lp<=rp)
        {
            int width=rp-lp;
            int mini=min(hgt[lp],hgt[rp]);
            int area=width*mini;

            max_water=max(max_water,area);

            hgt[lp]<hgt[rp]?lp++:rp--;
        }
        return max_water;
    }
};
