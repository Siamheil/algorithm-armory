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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector<int>heights(col,0);
        int max_rec=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0') heights[j]=0;
                else heights[j]+=1;
            }
            max_rec=max(max_rec,largestRectangleArea(heights));
        }
        return max_rec;
    }
};