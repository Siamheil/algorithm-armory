class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        int n=s.size();;
        int count=pow(2,k);
        for(int i=k;i<=n;i++){
            string sub=s.substr(i-k,k);
            if(!st.count(sub)){
                st.insert(sub);
                count--;
            }
            if(count==0) return true;
        }
        return false;
    }
};