class Solution {
public:
    vector<string>ans;
    unordered_map<char,string>mp;
    int n;
    void solve(int idx,string& digits,string& temp){
        if(idx>=n){
            ans.push_back(temp);
            return;
        }
        char ch=digits[idx];
        string str=mp[ch];
        for(int i=0;i<str.size();i++){
            temp.push_back(str[i]);
            solve(idx+1,digits,temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        n=digits.size();
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string temp="";
        solve(0,digits,temp);
        return ans;
    }
};