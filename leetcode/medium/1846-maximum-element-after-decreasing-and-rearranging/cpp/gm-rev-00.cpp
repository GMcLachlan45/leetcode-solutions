// Runtime: 88ms
// Memory: 51.67MB
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        arr[0] = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] - arr[i] > 1 || arr[i-1] - arr[i] < -1) {
                arr[i] = arr[i-1] + 1;
            }
        }
        return arr[arr.size()-1];
    }
};