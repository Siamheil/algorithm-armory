class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n==0) return 0;
        int longest=1,cnt=0,lastSmaller=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]-1==lastSmaller){
                cnt=cnt+1;
                lastSmaller=arr[i];
            }
            else if(arr[i]!=lastSmaller){
                cnt=1;
                lastSmaller=arr[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};