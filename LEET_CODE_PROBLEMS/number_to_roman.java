import java.util.*;

class Solution {
    public static String intToRoman(int num) {
        char valuearr[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
        String sb = "";
        int rem;
        int count = 0;
        while (num > 0) {
            rem = num % 10;
            if (rem > 0) {
                if (rem < 4) {
                    while (rem > 0) {
                        sb = valuearr[count] + sb;
                        rem--;
                    }
                } else if (rem == 4) {
                    sb = valuearr[count + 1] + sb;
                    sb = valuearr[count] + sb;
                } else if (rem == 5) {
                    sb = valuearr[count + 1] + sb;
                } else if (rem == 9) {
                    sb = valuearr[count + 2] + sb;
                    sb = valuearr[count] + sb;
                } else {
                    rem = rem - 5;
                    while (rem > 0) {
                        sb = valuearr[count] + sb;
                        rem--;
                    }
                    sb = valuearr[count + 1] + sb;
                }
            }
            count += 2;
            num /= 10;
        }
        return sb;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int tc;
        tc = sc.nextInt();
        while (tc > 0) {
            int num = sc.nextInt();
            String sb = intToRoman(num);
            tc--;
        }
    }
}