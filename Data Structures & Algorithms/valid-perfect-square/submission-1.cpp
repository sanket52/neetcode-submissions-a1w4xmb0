class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long l=1;
        long long r=num;

        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            long long sqr=mid*mid;

            if(sqr>num)
            {
                r=mid-1;
            }
            else if(sqr<num){
                l=mid+1;
            }
            else  return true;
        }
        return false;
    }
};