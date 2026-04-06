class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long left=0;
        long long right=num;

        while(left<=right)
        {
            long long mid=left+(right-left)/2;
            long long sqr=mid*mid;
            if(sqr>num)
            {
                right=mid-1;
            }
            else if(sqr<num)
            {
                left=mid+1;
            }
            else{
                return true;
            }

        }
        return false;
    }
};