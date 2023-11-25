class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> ans(n, -1), temp(n, -1);
        for (int i = 0; i < n; i++) {
            for (int j = index[i] + 1; j < n; j++) {
                ans[j] = temp[j-1];
            }
            for (int j = 0; j < n; j++) {
                temp[j] = ans[j];
            }
            ans[index[i]] = temp[index[i]] = nums[i];
        }
        return ans;
    }
};
