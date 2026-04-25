class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;

        for(const string & d:details)
        {
            int ten=d[11]-'0';
            int one=d[12]-'0';

            int age=one+ten*10;

            if(age>60)
            {
                res++;
            }
        }
        return res;

    }
};