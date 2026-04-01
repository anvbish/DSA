class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long st=1;
        long long end = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;
        long long ans;
        
        while(st<=end){
            long long trips=0;
            long long mid=st+(end-st)/2;
            for(int i=0;i<time.size();i++){
                trips+=mid/time[i];
            }
            if(trips>=totalTrips){
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