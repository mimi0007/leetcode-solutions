//Problem Link: 
//https://leetcode.com/problems/squares-of-a-sorted-array/?envType=daily-question&envId=2024-03-04

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
            nums[i] *= nums[i];

        int left = 0, right = nums.size() - 1;
        vector<int> ans(nums.size());

        for(int i = nums.size()-1; i >= 0; i--) {
            if (nums[right] >= nums[left]) {
                ans[i] = nums[right];
                right--;
            } else {
                ans[i] = nums[left];
                left++;
            }
        }

        return ans;
    }
};