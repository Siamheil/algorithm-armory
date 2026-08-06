class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        const int MOD=1e9+7;
        unordered_map<int,int>mpp;
        int ans=0;
        for(int &x:deliciousness){
            for (int i = 0; i <= 21; i++) {
                int power = pow(2, i);
                int req=power-x;
                if(mpp.count(req)){
                    ans=(ans+mpp[req])%MOD;
                }
            }
            mpp[x]++;
        }
        return ans;
    }
};