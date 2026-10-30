class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        for(int i = 0; i<n ;i++){
            int st =  i;
            int end = i;
            for(int j = 0 ; j<n ; j++){
                end = (end + 1) % n;
                if(nums[st] < nums[end]){
                    ans[st] = nums[end];
                    break;
                }
            }
        }
        return ans;
    }
};