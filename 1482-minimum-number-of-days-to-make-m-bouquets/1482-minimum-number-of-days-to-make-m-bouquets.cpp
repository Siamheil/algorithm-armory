class Solution {
public:
    bool canmake(int mid,int m,int k,vector<int>& bloomDay){
        int bouque=0;
        int consecutive_count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid) consecutive_count++;
            else consecutive_count=0;
            if(consecutive_count==k) {
                bouque++;
                consecutive_count=0;
            }
        }
        return bouque>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int l= *min_element(begin(bloomDay), end(bloomDay));;
        int r=*max_element(begin(bloomDay),end(bloomDay));
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(canmake(mid,m,k,bloomDay)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};