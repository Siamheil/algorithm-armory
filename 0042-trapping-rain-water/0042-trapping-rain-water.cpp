class Solution {
public:
    vector<int>findleftmax(vector<int>& height,int n){
        vector<int>leftmax(n);
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        return leftmax;
    }
    vector<int>findrightmax(vector<int>& height,int n){
        vector<int>rightmax(n);
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        return rightmax;
    }
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax=findleftmax(height,n);
        vector<int>rightmax=findrightmax(height,n);
        int ans=0;
        for(int i=0;i<n;i++){
            int h=min(leftmax[i],rightmax[i])-height[i];
            ans+=h;
        }
        return ans;
    }
};