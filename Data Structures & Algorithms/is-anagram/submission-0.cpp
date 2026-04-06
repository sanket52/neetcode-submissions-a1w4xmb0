class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int>f;
        for(char ch : s)
        {
            f[ch]++;
        }
        for(char ch : t)
        {
            if(f.find(ch)==f.end()|| f[ch]==0)
            {
                return false;
            }
            f[ch]--;
        }
        return true;
        
    }
};
