class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n =matrix[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        vector<int>ans;

        while(srow<=erow && scol<=ecol){
            for(int j = scol;j<=ecol;j++){
              ans.push_back(matrix[srow][j]);
            }
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
            }
            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            for(int i=erow-1;i>=srow+1;i--){
                 if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
         srow++;
         scol++;
         erow--;
         ecol--;
        }
        return ans;
    }
};