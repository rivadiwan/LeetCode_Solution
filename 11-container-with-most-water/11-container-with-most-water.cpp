class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0,left=0,right=height.size()-1;
        while(left<right){
            int h=min(height[left],height[right]);
            int length=right-left;
            int currwater=h*length;
            water=max(water,currwater);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return water;
    }
};