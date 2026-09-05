class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == t) {
                t++;

            } else if (nums[i] > t) {
                return t;
            } 
        }

        return 0;
    }
};