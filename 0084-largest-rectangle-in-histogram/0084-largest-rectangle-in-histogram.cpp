class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        int ans=0;
        int index;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                index=st.top();
                st.pop();
                if(!st.empty())
                ans=max(ans,(arr[index]*(i-st.top()-1)));
                else 
                ans=max(ans,arr[index]*i);
            }
            st.push(i);
        }
        while(!st.empty()){
            index=st.top();
            st.pop();
            if(!st.empty())
            ans=max(ans,arr[index]*(n-st.top()-1));
            else
            ans=max(ans,arr[index]*n);
        }
        return ans;
    }
};