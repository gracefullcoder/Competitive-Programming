public class product_of_array_except_self {
    class Solution {
        public int[] productExceptSelf(int[] nums) {
            int prod = 1;
            int n = nums.length;
            int ans[] = new int[n];
            int leftprod[] = new int[n];
            int rightprod[] = new int[n];
    
            leftprod[0] = 1;
            rightprod[n - 1] = 1;
    
            for (int i = 0; i < nums.length - 1; i++) {
                leftprod[i+1] = leftprod[i] * nums[i];
                
            }
    
            for(int i = nums.length - 2; i >= 0 ; i--){
                rightprod[i] = rightprod[i+1] * nums[i+1];
            }
    
            for(int i = 0 ; i < nums.length ; i++) {
                ans[i] = leftprod[i] * rightprod[i];
            }
    
            return ans;
        }
    }
}
