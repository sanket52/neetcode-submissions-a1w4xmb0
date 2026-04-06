class Solution {
public:

int sum(int n)
{     int rem=0;
    while(n!=0)
    {
        int digit=n%10;
        rem+=(digit*digit);
        n/=10;

    }
    return rem;
}
    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow=sum(slow);
            fast=sum(sum(fast));
        }
        while(slow!=fast);

        if(slow==1)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};
