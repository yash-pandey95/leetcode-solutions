class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total_sum = 0;
        for(int val: nums){
            total_sum += val;
        }
        int target = total_sum - x;
        if(target == 0) return n;
        int left = 0 ;
        int currsum = 0;
        int max_len = -1;
        for(int right = 0 ; right < n; right++){
            currsum += nums[right];

            while(currsum > target && left <= right){
                currsum -= nums[left];
                left++;
            }
            if(currsum == target){
                max_len = max(max_len , right - left +1);
            }
        }
        if(max_len == -1) return -1;

        return n - max_len;
    }
};