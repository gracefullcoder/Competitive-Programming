import java.util.*;

public class trapping_rainwater {
    public static int trap(int[] height) {
        int n = height.length;
        int leftMax[] = new int[n];
        int rightMax[] = new int[n];

        leftMax[0] = height[0];
        rightMax[n - 1] = height[n - 1];
        for(int i = 1 ; i < n ; i++) {
            leftMax[i] = Math.max(height[i],leftMax[i-1]);
            rightMax[n-i-1] = Math.max(height[n-i-1],rightMax[n-i]);
        }

        int waterTrapped = 0;

        for(int i = 0 ; i < n ; i++) {
            waterTrapped += Math.min(leftMax[i],rightMax[i]) - height[i];
        }
        
        return waterTrapped;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int height[] = new int[n];

        for(int i = 0 ; i < n ; i++){
            height[i] = sc.nextInt();
        }

        int ans = trap(height);
        System.out.println(ans);
    }
}