class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int c=0;
        while(l<r){
            int base=r-l;
            int high=min(height[l],height[r]);
            int area=base*high;
            c=max(c,area);
            if(height[l]<height[r]){
                l++;
            }else{r--;}
        }
        return c;

        
    }
};