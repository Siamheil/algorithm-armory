class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.rbegin(),citations.rend());
        for(int i=0;i<n;i++){
            if(citations[i]>=i+1) continue;
            else return i;
        }
        return n;
    }
};