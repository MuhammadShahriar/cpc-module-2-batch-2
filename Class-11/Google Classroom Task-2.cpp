class Solution
{
    public:
    vector<int> find(int a[], int n , int x )
    {
        int fo = -1, lo = -1;
        
        int l = 0, r = n-1;
        
        while ( l <= r ) {
            int mid = ( l + r ) / 2;
            
            if ( a[mid] == x ) fo = mid;
            if ( a[mid] >= x ) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        
        l = 0, r = n-1;
        while ( l <= r ) {
            int mid = ( l + r ) / 2;
            
            if ( a[mid] == x ) lo = mid;
            if ( a[mid] <= x ) {
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        
        return {fo, lo};
    }
};
