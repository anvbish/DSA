class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int n = height.size();
        int lp=0;
        int rp=n-1;
        while(lp<rp){
            int width=rp-lp;
            int h=min(height[lp],height[rp]);
            int area=width*h;
            maxArea=max(area,maxArea);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{rp--;}

        }
        return maxArea;
    }
};
