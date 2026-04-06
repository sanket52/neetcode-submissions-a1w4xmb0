class Solution {
public:
    int bSearch(int num)
    {
        long long int s=0;
        long long int end=num;
        long long int ans=-1;

        while(s<=end)
        {
            long long mid=s+(end-s)/2;
            long long int sq=mid*mid;

            if(sq==num)  return mid;
            
            if(sq<num)
            {
                ans=mid;
                s=mid+1;
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