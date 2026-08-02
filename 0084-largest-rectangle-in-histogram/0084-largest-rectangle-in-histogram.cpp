class Solution {
public:
    int n;
    vector<int>nsr(vector<int>& arr){
        vector<int>ans(n,n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                ans[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }

    vector<int>nsl(vector<int>& arr){
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                ans[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        n=heights.size();
        vector<int>nsr_vector=nsr(heights);
        vector<int>nsl_vector=nsl(heights);
        int max_area=INT_MIN;
        for(int i=0;i<n;i++){
            int area = (heights[i]*(nsr_vector[i]-nsl_vector[i]-1));
            max_area=max(max_area,area);
        }
        return max_area;
    }
};