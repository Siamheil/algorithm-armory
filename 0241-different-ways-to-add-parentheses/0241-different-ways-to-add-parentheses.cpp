class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
                string left=s.substr(0,i);
                string right=s.substr(i+1);
                vector<int>leftAns=diffWaysToCompute(left);
                vector<int>rightAns=diffWaysToCompute(right);
                for(int x:leftAns){
                    for(int y:rightAns){
                        if(s[i]=='+') ans.push_back(x+y);
                        else if(s[i]=='-') ans.push_back(x-y);
                        else ans.push_back(x*y);
                    }
                }
            }
        }
        if (ans.empty()) {
            ans.push_back(stoi(s));
        }

        return ans;
    }
};