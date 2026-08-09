class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int>index(names.size());
        for(int i=0;i<names.size();i++) index[i]=i;
        auto my_comparator=[&](int &a,int &b){
            return heights[a]>heights[b];
        };
        sort(index.begin(),index.end(),my_comparator);
        vector<string>ans;
        for(auto i:index){
            ans.push_back(names[i]);
        }
        return ans;
    }
};