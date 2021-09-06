//execute in leetode only
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        int prev_end,curr_start;
        for(int i = 1;i < n; ++i){
            prev_end = intervals[i-1][1];
            curr_start = intervals[i][0]; 
            if(curr_start <= prev_end){
                    intervals[i-1][1] = max(intervals[i-1][1],intervals[i][1]);
                    intervals[i][0] = min(intervals[i-1][0],intervals[i][0]);
            }
        }
        vector<int> temp;
        temp.push_back(intervals[0][0]);
        temp.push_back(intervals[0][1]);
        ans.push_back(temp);
        int curr_end;
        for(int i = 1;i < n; ++i){
            for(int j = 0; j < 2 ; ++j){
                curr_start = intervals[i][0];
                curr_end = intervals[i][1];
                if(temp[0] == curr_start)
                    continue;
                else{
                    temp[0] = curr_start;
                    temp[1] = curr_end;
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};