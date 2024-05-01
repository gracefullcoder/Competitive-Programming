import java.util.*;

public class reverse_32_bit_num {
    public static int reverseBits(int n) {
        int bitAhead = 0 ,rem = 0;
        int ans = 0;
        for(int i = 0 ; i < 32 ; i++) {
            rem = ((n & 1) == 0) ? 0 : 1;
            // System.out.println(rem +" " + ans);
            ans += (long)(rem*(Math.pow(2,31-i)));
            n = n >> 1;
        }
        return (int)ans;
    }
    public static void main(String args[]) {
        // you need treat n as an unsigned value
        int ans = reverseBits(-3);
        System.out.println("Final Ans :" + ans);
    }
}
