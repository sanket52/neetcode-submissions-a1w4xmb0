class Solution {
public:
    int missingNumber(vector<int>& n) {
        int ans=n.size();
        for(int i=0;i<n.size();i++)
        {
            ans+=i-n[i];
        }
        return ans;
        
    }
};
