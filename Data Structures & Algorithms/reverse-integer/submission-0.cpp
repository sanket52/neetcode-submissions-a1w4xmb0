class Solution {
public:
    int reverse(int x) {
        long int sum=0;
        while(x!=0)
        {
            int rem=x%10;
             sum=(sum*10)+rem;
            x/=10;
        }
      if(sum>INT_MIN && sum<INT_MAX)
      {
        return sum;
      }
      else{
        return 0;
      }
    }
};
