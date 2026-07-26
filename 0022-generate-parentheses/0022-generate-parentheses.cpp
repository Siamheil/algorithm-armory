class Solution {
public:
    bool isValid(string &s){
        stack<char>st;
        for(char c:s){
            if(c=='(') st.push(c);
            else{
                if(st.empty()) return false;
                else st.pop();
            }
        }
        return st.empty();
    }
    vector<string>ans;
    void solve(string &curr,int n){
        if(curr.length()==2*n){
            if(isValid(curr)) ans.push_back(curr);
            return;
        }
        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        solve(curr,n);
        return ans;
    }
};