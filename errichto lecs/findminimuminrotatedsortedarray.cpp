class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0;
        int n = arr.size();
        int high = n - 1;
        int ans = INT_MAX;
        while(low <=high)
        {
            int mid = (low + high) >> 1;
            if(arr[mid] >= arr[high]){
                ans = mid;
                low = mid + 1;
            }
            else 
                high = mid;
        }
        return ans==INT_MAX ? arr[0] : arr[ans];
    }
};