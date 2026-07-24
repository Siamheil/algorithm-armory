class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(2*n);
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
            arr[i+n]=nums[i];
        }
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=0;i<2*n;i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                int index=st.top();
                st.pop();
                if(index<n) ans[index]=arr[i];
            }
            st.push(i);
        }
        return ans;
    }
};