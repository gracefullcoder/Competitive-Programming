public class palindrome_number {
    class Solution {
        public boolean isPalindrome(int x) {
            boolean flag = true;
            if(x < 0){
                flag = false;
            }else{
                int rem;
                StringBuilder sb = new StringBuilder("");
                while(x > 0) {
                    rem = x % 10;
                    sb.append(rem);
                    x /= 10;
                }
                for(int i = 0 ; i < sb.length()/2 ; i++) {
                    if(sb.charAt(i) != sb.charAt(sb.length() - 1 - i)){
                        flag = false;
                        break;
                    }
                }
            }
            return flag;
        }
    }
}
