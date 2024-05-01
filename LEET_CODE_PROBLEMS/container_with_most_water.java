public class container_with_most_water {
    class Solution {
        public int maxArea(int[] height) {
            int maxwater = 0;
            int temp = 0;
            int lp = 0;
            int n = height.length;
            int rp = n - 1;
    
            while(lp < rp){
                if(height[lp] <= height[rp]){
                    temp = height[lp] * (rp - lp);
                    lp++;
                }else{
                    temp = height[rp] * (rp - lp);
                    rp--;
                }
                maxwater = Math.max(temp,maxwater);
            }
            return maxwater;
        }
    }
}
