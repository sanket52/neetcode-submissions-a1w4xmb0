class Solution {
public:
    bool isAlpha(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch>='A' && ch<='z') )
        return true;
        return false;
    }

    bool isPalindrome(string s) {
        int st=0;
        int end=s.length()-1;

        while(st<end)
        {
            if(!isAlpha(s[st]))
            {
                st++;
                continue;
            }
            if(!isAlpha(s[end]))
            {
                end--;
                continue;
            }

            if(tolower(s[st])!=tolower(s[end]))
            {
                return false;
            }

            else{
                swap(s[st],s[end]);
                st++;end--;
            }
           
        }

        return true;
    }
};
