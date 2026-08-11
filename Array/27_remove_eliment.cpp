class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int t;
        
        for(int j=0;j<nums.size();j++){
            if(nums[i]==val){
                
                t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;

                
                
            }
            if(nums[i]!=val){
                i++;
                
            }
            

        }return i ;
        
    }
};