import java.util.*;
import java.util.ArrayList;
import java.util.List;

public class spiral_matrix {
    public static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        int sr = 0;
        int sc = 0;
        int er = matrix.length - 1;
        int ec = matrix[0].length - 1;

        while (sr <= er && sc <= ec) {
            for (int i = sc; i < ec; i++) {
                ans.add(matrix[sr][i]);
            }

            for (int i = sr; i < er; i++) {
                ans.add(matrix[i][ec]);
            }

            if (sr != er) {
                for (int i = ec; i > sc; i--) {
                    ans.add(matrix[er][i]);
                }
            }

            if (sc != ec) {
                for (int i = er; i > sr; i--) {
                    ans.add(matrix[i][sc]);
                }
            }

            if(sr == er || sc == ec){
                if(sr == er){
                    ans.add(matrix[sr][ec]);
                }else{
                    ans.add(matrix[er][sc]);
                }
            }

            sr++;
            er--;
            sc++;
            ec--;
        }

        return ans;

    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int matrix[][] = new int[m][n];

        for(int i = 0 ; i < m ; i++ ){
            for(int j = 0 ; j < n ; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        List<Integer> ans = spiralOrder(matrix);

        for(int i = 0 ; i < ans.size() ; i++){
            System.out.print(ans.get(i) + " ");
        }
    }
}

