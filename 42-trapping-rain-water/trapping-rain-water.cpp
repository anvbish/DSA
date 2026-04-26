class Solution {
public:
    int trap(vector<int>& heights) {
        int leftM=0;
        int rightM=0;
        int total=0;
        int n=heights.size();
        int lp=0;
        int rp=n-1;
        while(lp<rp){
            if(heights[lp]<heights[rp]){
                if(leftM>=heights[lp]){
                    total+=leftM-heights[lp];
                }
                else{
                    leftM=heights[lp];
                }
                lp++;
            }
            else{
                if(rightM>=heights[rp]){
                    total+=rightM-heights[rp];
                }
                else{
                    rightM=heights[rp];
                }
                rp--;
            }
        }
        return total;
    }
};