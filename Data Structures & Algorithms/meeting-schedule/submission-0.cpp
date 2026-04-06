/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& value) {
        
        sort(value.begin(),value.end(),[](auto & x,auto & y)
        {
            return x.start<y.start;
        });

        for(int i=1;i<value.size();i++)
        {
            if(value[i].start<value[i-1].end)  return false;
        }

        return true;
    }
};
