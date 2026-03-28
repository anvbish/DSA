class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=0;
        int end=arr.size()-1;
        int mid;
        if(arr.size()==1){
            return 0;
        }
        while(st<end){
            int mid=st+(end-st)/2;
           if(mid > 0 && mid < arr.size() - 1 && 
           arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
           }
           else if(mid < arr.size() - 1 && arr[mid]<arr[mid+1]){
                st=mid+1;
           }
           else {
                end=mid-1;
           }
        }
        return mid;
    }
};