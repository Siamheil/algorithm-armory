class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWater=INT_MIN;
        int i=0,j=n-1;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            int area=w*h;
            maxWater=max(maxWater,area);
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxWater;
    }
};