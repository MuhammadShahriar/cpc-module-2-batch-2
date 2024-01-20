class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;

        int ans = -1;
        while ( l <= r ) {
            int mid = ( l + r ) / 2;

            if(nums[mid] == target) {
                ans = mid;
                break;
            }

            if ( nums[mid] <= target ) {
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }

        return ans;
    }
};