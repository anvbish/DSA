class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        st=0
        end=len(nums)-1
        while(st<=end):
            mid=st+(end-st)//2
            if(target==nums[mid]):
                return mid
            elif(target>nums[mid]):
                st=mid+1
            else:
                end=mid-1
        return -1
        