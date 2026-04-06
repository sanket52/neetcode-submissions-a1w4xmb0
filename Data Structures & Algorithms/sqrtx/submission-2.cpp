class Solution {
public:
    int bSearch(int num)
    {
        long long int st=0;
        long long int end=num;
        long long int ans=-1;

        while(st<=end)
        {
            long long mid=st+(end-st)/2;

            long long int sqt=mid*mid;

            if(sqt==num) return mid;

            if(sqt<num)
            {
                ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }

    int mySqrt(int x) {
        return bSearch(x);
    }
};