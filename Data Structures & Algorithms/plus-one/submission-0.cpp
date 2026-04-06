class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
          int s=arr.size()-1;
          while(s>=0)
          {
            if(arr[s]==9)
            {
                arr[s]=0;
                
            }
            else{
                arr[s]+=1;
                return arr;
            }
            s--;
          }
        arr.insert(arr.begin(),1);
        return arr;
       
    }
};
