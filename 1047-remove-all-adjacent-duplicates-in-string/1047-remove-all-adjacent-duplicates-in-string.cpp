class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char &ch:s){
            if(!st.empty() && ch==st.top()) st.pop();
            else st.push(ch);
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};