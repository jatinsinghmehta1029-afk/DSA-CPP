public:
    vector<string> summaryRanges(vector<int>& nums) {
        int v=0;
        vector<string> ans;
        for(int i=0;i<nums.size();i++){
            v=nums[i];
            while(i+1<nums.size()&&nums[i+1]==nums[i]+1){
                i++;
            }
            if(v==nums[i]){
            ans.push_back(to_string(v));
            }
            else{
                ans.push_back(to_string(v)+"->"+to_string(nums[i]));
            }
        }return ans;


    }
};