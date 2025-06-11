class Solution {
public:
  bool searchRow(vector<vector<int>>& mat, int target, int midRow){
    int n=mat[0].size();
    int st=0, end =n-1;
    while(st<= end ){
        int mid=st+(end -st)/2;
        if ( target == mat[midRow][mid]){ return true;}
        else if(target > mat[midRow][mid] ){
            st=mid +1;
        }
        else{ end =mid-1;}
    }return false;
  }










    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n =mat[0].size();
        int startROW=0;
        int endROW =m-1;
        while(startROW<= endROW){
            int midRow=startROW+(endROW-startROW)/2;
            if(target>=mat[midRow][0] && target <= mat[midRow][n-1]){
                return searchRow(mat, target, midRow);


            }
            else if(target >= mat[midRow][n-1]){
                startROW++;
            }
            else{ endROW --;}
        }return false;
        
    }
};