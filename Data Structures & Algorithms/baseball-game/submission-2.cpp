class Solution {
public:
    int calPoints(vector<string>& ops) {
        

        stack<int>st;

        int res=0;

        for(const string &op :ops)
        {
            if(op=="+")
            {
                int a=st.top();st.pop();
                int b=st.top();
                int sum=a+b;

                st.push(a);
                st.push(sum);

                res+=sum;
            }

            else if(op=="D")
            {
                st.push(2*st.top());
                res+=st.top();

            }


            else if(op=="C")
            {
                res-=st.top();
                st.pop();
            }


            else{
                st.push(stoi(op));
                res+=st.top();
            }
        }
        return res;
    }
};