class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n=b.size();
        vector<int>temp(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(a[i]<=b[j]){
                temp[k++]=a[i++];
            }
            else{
                temp[k++]=b[j++];
            }
        }
        while(i<m) temp[k++]=a[i++];
        while(j<n) temp[k++]=b[j++];
        int size=m+n;
        if(size%2==1) return temp[size/2];
        else return (temp[size/2]+temp[(size/2)-1])/2.0;
    }
};