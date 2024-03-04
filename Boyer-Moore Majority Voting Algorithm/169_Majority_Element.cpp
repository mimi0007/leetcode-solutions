//Problem Link: 
//https://leetcode.com/problems/majority-element/?envType=daily-question&envId=2024-02-12

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, result;

        for(int i: nums) {
            if (count == 0) 
                result = i;

            count += (i == result) ? 1: -1;
        }

        return result; 
    }
};