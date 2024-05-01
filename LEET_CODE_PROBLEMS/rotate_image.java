public class rotate_image {

    public void rotate(int[][] matrix) {
        int a, b, c, d;
        int n = matrix.length;
        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < n - i - 1; j++) {
                a = matrix[i / 2][j + (i / 2)];
                b = matrix[j + (i / 2)][n - 1 - (i / 2)];
                c = matrix[n - (i / 2) - 1][n - 1 - j - (i / 2)];
                d = matrix[n - 1 - j - (i / 2)][i / 2];

                matrix[i / 2][j + (i / 2)] = d;
                matrix[j + (i / 2)][n - 1 - (i / 2)] = a;
                matrix[n - (i / 2) - 1][n - 1 - j - (i / 2)] = b;
                matrix[n - 1 - j - (i / 2)][i / 2] = c;
            }
        }
    }

}
