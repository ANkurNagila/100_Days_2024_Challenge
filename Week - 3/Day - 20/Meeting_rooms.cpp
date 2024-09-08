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
    void sortIntervals(std::vector<Interval>& intervals) {
        std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });
    }

    bool canAttendMeetings(vector<Interval>& intervals) {
        sortIntervals(intervals);
        int n=intervals.size();

        if(n<=1)
            return true;

        for(int i=1;i<n;i++){
            if(intervals[i-1].end > intervals[i].start)
                return false;
        }

        return true;
    }
};
