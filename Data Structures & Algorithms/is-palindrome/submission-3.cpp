class Solution {
public:
    bool isAlpha(char ch)
    {
        if((ch>='0'  && ch<='9')||(ch>='a'  && ch<='z')  || (ch>='A'  && ch<='Z'))  return true;
        return false;
    }


    bool isPalindrome(string s) {
        
        int st=0;
        int end=s.length();

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
                st++;
                end--;
            }
        }
        return true;
    }
};
