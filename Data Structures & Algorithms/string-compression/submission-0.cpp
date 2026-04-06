class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n=chars.size();
        int write=0;
        int read=0;

        while(read<n)
        {
            char current=chars[read];
            int count=0;

            while(read<n  && chars[read]==current)
            {
                read++;
                count++;
            }
            chars[write++]=current;

            if(count>1)
            {
                string s=to_string(count);
                for(char c:s)
                {
                     chars[write++] = c;
                }

            }
        }
        return write;


    }
};


// class Solution {
// public:
//     int compress(vector<char>& chars) {
        
//         int n = chars.size();
//         int write = 0;   // position to write
//         int read = 0;    // position to read
        
//         while (read < n) {
            
//             char current = chars[read];
//             int count = 0;
            
//             // count occurrences
//             while (read < n && chars[read] == current) {
//                 read++;
//                 count++;
//             }
            
//             // write character
//             chars[write++] = current;
            
//             // write count if >1
//             if (count > 1) {
//                 string s = to_string(count);
//                 for (char c : s) {
//                     chars[write++] = c;
//                 }
//             }
//         }
        
//         return write;
//     }
// };