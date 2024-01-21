class Solution {
public:
    int searchInsert(vector<int>& a, int x) {
        int n = a.size();
        int l = 0, r = n-1;
        int ans = n;
        
        while ( l <= r ) {
            int mid = (l + r) / 2;
            
            if ( a[mid] >= x ) {
                ans = mid;
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }

        return ans;
    }
};