public class counting_bits {
    class Solution {

        public int[] countBits(int n) {
            int ans[] = new int[n  + 1];
            ans[0] = 0;
            int nearPowerOf2 = 0;
            
            for(int i = 1; i <= n ; i++) {
                if((i & (i -1)) == 0) { // iska mtlb power of 2
                    ans[i] = 1;
                    nearPowerOf2 = i;
                }else{
                    ans[i] = ans[nearPowerOf2] + ans[i - nearPowerOf2];
                }
            }
            return ans;
        }
    }
    
    
    // class Solution {
    //     public int countOnes(int num){
    //         int count = 0;
    //         while(num > 0) {
    //             if((num & 1) == 1){
    //                 count++;
    //             }
    //             num = num >> 1;
    //         }
    //         return count;
    //     }
    
    //     public int[] countBits(int n) {
    //         int ans[] = new int[n  +1];
    
    //         for(int i = 0; i <= n ; i++) {
    //             ans[i] = countOnes(i);
    //         }
    
    //         return ans;
    //     }
    // }
}
