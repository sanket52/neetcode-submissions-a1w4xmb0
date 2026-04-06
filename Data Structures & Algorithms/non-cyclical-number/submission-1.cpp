class Solution {
public:
    int sum(int n)
    {
        int digit=0;
        int sum=0;

        while(n!=0)
        {
            digit=n%10;
            sum+=digit*digit;
            n/=10;
        }

        return sum;
    }


    bool isHappy(int n) {
        int slow=n;
        int fast=n;

        do{
            slow=sum(slow);
            fast=sum(sum(fast));
        }

        while(fast!=slow);

        if(slow==1) return true;
        else return false;
    }
};
