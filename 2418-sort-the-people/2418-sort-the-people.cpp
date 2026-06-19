class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,int>mp;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=i;
        }
        sort(heights.begin(),heights.end(),greater<int>());
        vector<string>ans;
        for(int i=0;i<names.size();i++){
            ans.push_back(names[mp[heights[i]]]);
        }
        return ans;
    }

};