public class max_product_subarray {
    class Solution {
        public int maxProduct(int[] nums) {
            boolean zf = false;
            boolean nf = true;
            int ans = 1;
            int negans = 1;
            int maxansLeft = Integer.MIN_VALUE;
            int maxansRight = Integer.MIN_VALUE;
    
            for(int i = 0 ; i < nums.length ; i++) {
                ans *= nums[i];
                maxansLeft = Math.max(maxansLeft,ans);
                
                if(ans < 0) {
                    if(nf){ //odd times negative
                        negans = ans;
                        ans = 1;
                        nf = false;
                    }else{ //evem times
                        ans *= negans;
                        maxansLeft = Math.max(maxansLeft,ans);
                        nf = true;
                    }
                }else if(ans == 0){
                    ans = 1; // phir se new ans ahead
                    nf = true; //negative ka scene khatam;
                }
            }
    
    
            zf = false;
            nf = true;
            ans = 1;
            negans = 1;
    
            for(int i = nums.length - 1; i >=0 ; i--) {
                ans *= nums[i];
                maxansRight = Math.max(maxansRight,ans);
    
                if(ans < 0) {
                    if(nf){ //odd times negative
                        negans = ans;
                        ans = 1;
                        nf = false;
                    }else{ //evem times
                        ans *= negans;
                        maxansRight = Math.max(maxansRight,ans);
                        nf = true;
                    }
                }else if(ans == 0){
                    ans = 1; // phir se new ans ahead
                    nf = true; //negative ka scene khatam;
                }
            }
            
            return Math.max(maxansRight,maxansLeft);
        }
    }
}
