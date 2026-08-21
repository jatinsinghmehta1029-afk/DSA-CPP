class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> answer;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++) {

            int j = i + 1;
            int g = nums.size() - 1;

            while(j < g) {

                int sum = nums[i] + nums[j] + nums[g];

                if(sum == 0) {
                    answer.push_back({nums[i], nums[j], nums[g]});

                    j++;
                    g--;

                   
                    while(j < g && nums[j] == nums[j-1])
                        j++;

                    while(j < g && nums[g] == nums[g+1])
                        g--;
                }
                else if(sum < 0) {
                    j++;
                }
                else {
                    g--;
                }
            }

          
            while(i + 1 < nums.size() && nums[i] == nums[i+1])
                i++;
        }

        return answer;
    }
};