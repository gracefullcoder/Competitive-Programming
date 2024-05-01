public class missing_number {
    class Solution {
        public int missingNumber(int[] nums) {
            int ans= 0;
            int n = nums.length;
            for(int i = 0 ; i < nums.length; i++) {
                ans = ans + nums[i];
            }
            ans = (n*(n+1))/2 - ans;
            return ans;
        }
    }
    
    
    // class Solution {
    //     public int missingNumber(int[] nums) {
    //         int ans=0;
    //         for(int i = 1 ; i <= nums.length; i++) {
    //             ans = ans ^ i ;
    //         }
    //         for(int i = 0 ; i < nums.length; i++) {
    //             ans = ans ^ nums[i];
    //         }
    //         return ans;
    //     }
    // }
    
    // class Solution {
    //     public int missingNumber(int[] nums) {
    //         int check[] = new int[nums.length + 1];
    //         for(int i = 0 ; i < nums.length ; i++) {
    //             check[nums[i]]++;
    //         }
    //         int i;
    //         for(i = 0 ; i <check.length; i++) {
    //             if(check[i] == 0){
    //                 break;
    //             }
    //         }
    //         return i;
    //     }
    // }
}
