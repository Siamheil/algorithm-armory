class Solution {
public:
    vector<string>result;
    bool isValid(string &curr){
        int count=0;
        for(char ch:curr){
            if(ch=='(') count++;
            else count--;
            if(count<0) return false;
        }
        return count==0;
    }
    void solve(string &curr,int n){
        if(curr.length()==2*n) {
            if(isValid(curr)) result.push_back(curr);
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
        return result;
    }
};