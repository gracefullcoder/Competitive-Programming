import java.util.*;

public class minimum_in_rotated_sorted_array {
    
        public static int findMin(int[] nums) {
            int mid;
            int si = 0;
            int ei = nums.length -1;
            int ans = 0;
            
            while(si<=ei){
                mid = (ei - si)/2 + si;
                if(si == ei){
                    ans = nums[si];
                    break;
                }
                else if(ei - si == 1){
                    ans = Math.min(nums[si],nums[ei]);
                    break;
                }
                else{
                    if(nums[mid] < nums[ei]){
                        ei = mid;
                    }else{
                        si = mid;
                    }
                }
            }
            return ans;
        }
    
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int nums[] = new int[n];
            for(int i = 0 ; i < n ; i++) {
              nums[i] = sc.nextInt();
            }

            int ans = findMin(nums);
            System.out.println(ans);
        }
}
