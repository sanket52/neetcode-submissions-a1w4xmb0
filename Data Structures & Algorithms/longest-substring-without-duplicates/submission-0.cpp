class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>window;
        int right=0;
        int left=0;
        int maxLen=0;
        while(right<s.length())
        {
            if(!window.count(s[right]))
             {
                window.insert(s[right]);
                maxLen=max(maxLen,right-left+1);
                right++;
             }
             else{
                window.erase(s[left]);
                left++;
             }

        }
        return maxLen;
    }
};
