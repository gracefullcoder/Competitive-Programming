import java.util.*;

public class best_time_to_buy_and_sell_stock {
    public static int maxProfit(int[] prices) {
        int maxprofit = 0;
        int currprofit;
        int bp = prices[0];

        for (int i = 1; i < prices.length; i++) {
            currprofit = prices[i] - bp;
            if (currprofit > 0) {
                maxprofit = Math.max(currprofit, maxprofit);
            } else {
                bp = prices[i];
            }
        }
        return maxprofit;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] prices = new int[n];

        for(int i = 0; i < n; i++) {
            prices[i] = sc.nextInt();
        }

        int ans = maxProfit(prices);
        System.out.println(ans);
    }
}
