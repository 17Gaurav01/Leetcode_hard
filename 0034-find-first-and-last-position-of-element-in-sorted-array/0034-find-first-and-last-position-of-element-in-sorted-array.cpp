class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int pos1 = -1 , pos2 = -1;
        int i = 0 , j = n-1;
        while(i<=j){
            int mid = (i+j)>>1;
            if(nums[mid] == target){
                pos1 = mid;
                j = mid-1;
            }
            else if(nums[mid] < target){
                 i = mid + 1;
            }
            else j = mid - 1;
        }
        i = 0 , j = n-1;
        while(i<=j){
            int mid = (i+j)>>1;
            if(nums[mid] == target){
                pos2 = mid;
                i = mid + 1;
            }
            else if(nums[mid] < target){
                 i = mid+1;
            }
            else j = mid-1;
        }

        return {pos1 , pos2};

        
    }
};