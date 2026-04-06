class Solution {
public:
    bool isPalindrome(int x) {
        
        int original=x;
        int digit=0;
        if(x<0)
         return false;

        while(x>0)
        {
                int rem=x%10;
                digit=digit*10+rem;
                x/=10;
        }

       return digit==original;
    }
};