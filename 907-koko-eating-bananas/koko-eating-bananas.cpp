class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans;
        while(st<=end){
            int  mid=st+(end-st)/2;
             long long totalH = 0;
        for(int i=0; i<piles.size();i++){
            totalH+=ceil((double)piles[i]/mid);
            }
            if(totalH<=h){
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