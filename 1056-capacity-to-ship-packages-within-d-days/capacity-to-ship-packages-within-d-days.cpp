class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long st=*max_element(weights.begin(), weights.end());
        long long end = accumulate(weights.begin(), weights.end(), 0LL);
        long long ans=end;
        while(st<=end){
            long long mid=st+(end-st)/2;
            long long dayused=1;
            long long load=0;
            for(int i=0;i<weights.size();i++){
               if(load+weights[i]<=mid){
                load+=weights[i];
               }
               else{
                dayused++;
                load=weights[i];
               }
            }
            if(dayused <=days){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;

    }
};