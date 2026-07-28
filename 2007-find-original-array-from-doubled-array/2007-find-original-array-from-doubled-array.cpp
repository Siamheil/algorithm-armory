class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        int n=changed.size();
        if(n%2!=0) return {};
        sort(changed.begin(),changed.end());
        unordered_map<int,int>mpp;
        for(int x:changed) mpp[x]++;
        for(int i=0;i<n;i++){
            int num=changed[i];
            int twice=2*num;
            if(mpp[num]==0) continue;
            if(mpp.find(twice)==mpp.end()||mpp[twice]==0) return {};
            ans.push_back(num);
            mpp[num]--;
            mpp[twice]--;
        }
        if(ans.size()!=n/2) return {};
        return ans;
    }
};