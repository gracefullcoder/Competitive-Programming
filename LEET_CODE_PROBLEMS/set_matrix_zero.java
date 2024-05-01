class set_matrix_zero {
    public void setZeroes(int[][] matrix) {
        int flag = matrix[0][0];
        int row1 = -1;
        int col1 = -1;

        if (flag != 0) {
            for (int i = 0; i < matrix[0].length; i++) {
                if (matrix[0][i] == 0) {
                    row1 = 0;
                    break;
                }
            }

            for (int i = 0; i < matrix.length; i++) {
                if (matrix[i][0] == 0) {
                    col1 = 0;
                    break;
                }
            }
        }

        for (int i = 1; i < matrix.length; i++) {
            for (int j = 1; j < matrix[0].length; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Mark this row
                    matrix[0][j] = 0; // Mark this column
                }
            }
        }

        for (int i = 1; i < matrix.length; i++) {
            for (int j = 1; j < matrix[0].length; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // for (int i = 0; i < matrix.length; i++) {
        //     for (int j = 0; j < matrix[0].length; j++) {
        //         System.out.println("-----" + matrix[i][j]);
        //     }
        // }

        if (row1 == 0 && col1 == 0)
            flag = 0;

        // System.out.println(flag);
        // System.out.println(row1);
        // System.out.println(col1);

        if (flag == 0) {
            for (int i = 0; i < matrix[0].length; i++) {
                matrix[0][i] = 0;
            }

            for (int i = 0; i < matrix.length; i++) {
                matrix[i][0] = 0;
            }
        } else {
            if (row1 == 0) {
                for (int i = 0; i < matrix[0].length; i++) {
                    matrix[0][i] = 0;
                }
            }
            if (col1 == 0) {
                for (int i = 0; i < matrix.length; i++) {
                    matrix[i][0] = 0;
                }
            }
        }
    }
}
