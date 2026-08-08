class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        vector<int>new_interval=intervals[0];
        result.push_back(new_interval);
        for(auto interval:intervals){
            if(interval[0]<=new_interval[1]){
                new_interval[1]=max(interval[1],new_interval[1]);
                result.back()[1]=new_interval[1];
            }else{
                new_interval=interval;
                result.push_back(new_interval);
            }
        }
        return result;
    }
};