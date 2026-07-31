class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<pair<int,int>>st;
        int n=arr.size();
        vector<int>result(n);
        for(int i=0;i<n;i++){
            int span=1;
            while(!st.empty() && arr[st.top().first]<=arr[i]){
                span=span+st.top().second;
                st.pop();
            }
            result[i]=span;
            st.push({i,span});
        }
        return result;
    }
};