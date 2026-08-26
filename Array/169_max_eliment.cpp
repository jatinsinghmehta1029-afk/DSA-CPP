class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,y=0;
        for(int num:nums){
            if(y==0){
                c=num;}
            if(num==c){
                y++;}
            else{
                y--;}
        }

        return c;
    }
};