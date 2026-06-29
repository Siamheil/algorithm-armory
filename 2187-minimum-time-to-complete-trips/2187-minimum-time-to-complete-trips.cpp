class Solution {
public:
    bool possible(vector<int>& time,long long mid,int totalTrips){
        int n=time.size();
        long long actualTrips=0;
        for(int i=0;i<n;i++){
            actualTrips+=(mid)/time[i];
        }
        return actualTrips>=totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        long long l = 1;
        long long r = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;
        long long ans=-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(possible(time,mid,totalTrips)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};