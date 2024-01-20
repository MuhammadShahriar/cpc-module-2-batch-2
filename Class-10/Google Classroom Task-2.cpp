class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort ( nums1.begin(), nums1.end() );
        sort ( nums2.begin(), nums2.end() );
        vector<int> ans;
        int prev = -1;
        for ( auto u : nums1 ) {
            if ( prev == u ) continue;
            prev = u;
            int l = 0, r = nums2.size()-1;

            bool isExists = false;

            while ( l <= r ) {
                int mid = ( l + r ) / 2;
                if ( nums2[mid] == u ) {
                    isExists = true;
                    break;
                }

                if ( nums2[mid] < u ) {
                    l = mid+1;
                }
                else {
                    r = mid-1;
                }
            }

            if ( isExists ) {
                ans.push_back ( u );
            }
        }

        return ans;
    }
};