class Solution {
public:
    int maxele(vector<int>& piles){
        int n=piles.size();
        int maxelement=INT_MIN;
        for(int i=0;i<n;i++){
            if(piles[i]>maxelement){
                maxelement=piles[i];
            }
        }
        return maxelement;
    }
    long long calculateTotalHours(vector<int>& piles,int hourly){
        int n=piles.size();
        long long totalhours=0;
        for(int pile : piles){
        totalhours += (pile + hourly - 1) / hourly;
    }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=maxele(piles);
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalH=calculateTotalHours(piles,mid);
            if(totalH<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};