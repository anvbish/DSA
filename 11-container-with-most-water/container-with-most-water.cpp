class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxwater=0;
        while(lp<rp){
            int width=rp-lp;
            int h=min(height[lp], height[rp]);
            int current=width*h;
            maxwater=max(current,maxwater);
            if(height[lp]>height[rp]){
                rp--;
            }
            else{
                lp++;
            }
        }
        return maxwater;
    }
};