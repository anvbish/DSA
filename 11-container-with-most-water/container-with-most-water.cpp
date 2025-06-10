class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxwater=0;
        int lp=0 , rp=n-1;
        while(lp<rp){
           int width=rp-lp;
           int ht= min(height[lp], height[rp]);
           int current=width*ht;
           maxwater=max(maxwater,current);
           height[lp]<height[rp]?lp++:rp--;

        }
     return maxwater;
    }
};